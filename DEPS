vars = {
    'clang_version': 'git_revision:020d2fb7711d70e296f19d83565f8d93d2cfda71',
    }

deps = {
    'third_party/clang': {
      'packages': [
        {
          # TODO make this platform
          'package': 'fuchsia/third_party/clang/${{platform}}',
          'version': Var('clang_version'),
          },
        ],
      'dep_type': 'cipd',
      },
    'third_party/ninja': {
      'packages': [
        {
          'package': 'infra/3pp/tools/ninja/${{platform}}',
          'version': 'version:2@1.11.1.chromium.4',
          }
        ],
      'dep_type': 'cipd',
      },
    }

# vim: set ft=python shiftwidth=2 tabstop=2 :
