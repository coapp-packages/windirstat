@import "version.inc";
@import "outercurve.inc";

package {
    name: "windirstat[${flavor}]";
    version: "${package-version}";
    arch : "${arch}";
    
    display-name: "Windirstat";
    location: "http://coapp.org/repository/${OutputFilename}";

    feed: "http://coapp.org/repository/packages.atom.xml";
    publisher: "CoApp Project";
}

files[exes] {
    root: @"..\urelease\${arch}\";
    
    include: {
        "windirstat.exe",
    };
    
    trim-path: all;
};


files[dlls] {
    root: @"..\urelease\${arch}\";
  
    include: {
        "wdsr040a.dll",
		"wdsr040c.dll",
		"wdsr040e.dll",
		"wdsr0405.dll",
		"wdsr0407.dll",
		"wdsr0410.dll",
		"wdsr0415.dll",
		"wdsr0419.dll",
    };
    
    trim-path: all;
};

files[chms] {
    root: @"..\urelease\";
  
    include: {
        "wdsh040e.chm",
		"wdsh0407.chm",
		"wdsh0415.chm",
		"windirstat.chm",
    };
    
    trim-path: all;
};

license[GPL] {
    license-url: "http://www.gnu.org/licenses/gpl-2.0.html";
    license-type: "GPL";
}

files[files-to-sign] {
    include: { 
        exes,
        dlls
    };    
}


metadata {
    summary: "Windirstat";
    description:  @"WinDirStat is a disk usage statistics viewer and cleanup tool for Microsoft Windows."; 

    icon: @"windirstat.png";
    
    author-version : "1.1.2";
    bug-tracker: "https://github.com/coapp-packages/windirstat/issues";
    stability : "0";
    licenses : {
        GPL
    };
}

compatability-policy {
    minimum: "1.1.2.0";
    maximum: "${OneLessThanCurrent}"; // this is the default
    versions : {
        "1.1",
    }; // if not specified, find the versions by looking at the feeds and finding all the major/minor versions in range.
}

application {
    include : {
        exes,
		dlls,
		chms,
    };
}

package-composition {
    shortcut : { 
        exes => @"${bin}\${each.Name}.lnk" = @"${packagedir}\${each.Name}";
    };
}

signing {
    attributes : {
        company="Outercurve Foundation",
        description="windirstat",
        product-name="windirstat",
        product-version="${package-version}",
        file-version="${package-version}",
    };
    
    replace-signature: true; 
    include: { 
        files-to-sign
    };    
}