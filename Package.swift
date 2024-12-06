// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterI3Config",
    products: [
        .library(name: "TreeSitterI3Config", targets: ["TreeSitterI3Config"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterI3Config",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterI3ConfigTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterI3Config",
            ],
            path: "bindings/swift/TreeSitterI3ConfigTests"
        )
    ],
    cLanguageStandard: .c11
)
