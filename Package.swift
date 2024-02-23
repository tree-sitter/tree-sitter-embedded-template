// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterEmbeddedTemplate",
    platforms: [.macOS(.v10_13), .iOS(.v11)],
    products: [
        .library(name: "TreeSitterEmbeddedTemplate", targets: ["TreeSitterEmbeddedTemplate"]),
    ],
    dependencies: [],
    targets: [
        .target(name: "TreeSitterEmbeddedTemplate",
                path: ".",
                exclude: [
                    "binding.gyp",
                    "bindings",
                    "Cargo.toml",
                    "corpus",
                    "grammar.js",
                    "LICENSE",
                    "package.json",
                    "README.md",
                    "src/grammar.json",
                    "src/node-types.json",
                ],
                sources: [
                    "src/parser.c",
                ],
                resources: [
                    .copy("queries")
                ],
                publicHeadersPath: "bindings/swift",
                cSettings: [.headerSearchPath("src")])
    ]
)
