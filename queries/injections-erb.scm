((template
  (content) @injection.content) @injection.site
 (set! injection.language "html"))

((template
  (* (code) @injection.content)) @injection.site
 (set! injection.language "ruby"))
