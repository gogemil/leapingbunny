; ableorganizer demo make file
api = 2
core = 7.34

; crm core + features prerequisites
projects[views][version] = 3.10
projects[views][subdir] = "contrib"
projects[views_bulk_operations][version] = 3.2
projects[views_bulk_operations][subdir] = "contrib"
projects[ctools][version] = 1.6
projects[ctools][subdir] = "contrib"
projects[entity][version] = 1.6
projects[entity][subdir] = "contrib"
projects[entity][patch][] = "https://www.drupal.org/files/issues/unformatted_replacements-2082407-6.patch"
projects[entityreference][version] = 1.1
projects[entityreference][subdir] = "contrib"
projects[relation][version] = 1.0-rc7
projects[relation][subdir] = "contrib"
projects[token][version] = 1.5
projects[token][subdir] = "contrib"
projects[panels][version] = 3.5
projects[panels][subdir] = "contrib"
projects[rules][version] = 2.8
projects[rules][subdir] = "contrib"
projects[libraries][version] = 2.2
projects[libraries][subdir] = "contrib"
projects[features][version] = 2.3
projects[features][subdir] = "contrib"
projects[diff][type] = module
projects[diff][download][type] = git
projects[diff][download][branch] = 7.x-3.x
projects[diff][download][revision] = 29ca19a003bfa1cb3fd4a86fe20aacae72e90767
projects[diff][subdir] = "contrib"
projects[context][version] = 3.6
projects[context][subdir] = "contrib"
projects[strongarm][version] = 2.0
projects[strongarm][subdir] = "contrib"
projects[menu_token][type] = module
projects[menu_token][download][type] = git
projects[menu_token][download][branch] = 7.x-1.x
projects[menu_token][download][revision] = eda6188de57198b89b94accd421fd283cd512753
projects[menu_token][subdir] = "contrib"
projects[entity_view_mode][version] = "1.0-rc1"
projects[entity_view_mode][subdir] = "contrib"

; administration
projects[admin_menu][type] = module
projects[admin_menu][version] = 3.0-rc5
projects[admin_menu][subdir] = "contrib"
projects[module_filter][version] = 2.0
projects[module_filter][subdir] = "contrib"

; fields
projects[name][type] = module
projects[name][download][type] = git
projects[name][download][branch] = 7.x-1.x
projects[name][download][revision] = dbb981c8c4f6d53fc3acb385671d13b1f25ce9ee
projects[name][patch][] = "https://www.drupal.org/files/issues/name-2221717-16.patch"
projects[name][subdir] = "contrib"
projects[field_group][version] = 1.4
projects[field_group][subdir] = "contrib"
projects[cck_phone][type] = module
projects[cck_phone][download][type] = git
projects[cck_phone][download][branch] = 7.x-1.x
projects[cck_phone][download][revision] = 03e52f3f9ec7d38da5383863c2dc68b1d760995c
projects[cck_phone][subdir] = "contrib"
projects[link][version] = 1.3
projects[link][subdir] = "contrib"
projects[email][version] = 1.3
projects[email][subdir] = "contrib"
projects[addressfield][version] = 1.0
projects[addressfield][subdir] = "contrib"
projects[date][version] = 2.9-beta2
projects[date][subdir] = "contrib"
projects[select_or_other][version] = 2.20
projects[select_or_other][subdir] = "contrib"
projects[calendar][type] = module
projects[calendar][download][type] = git
projects[calendar][download][branch] = 7.x-3.x
projects[calendar][download][revision] = 23730b91170e040a4a85a1cd4a7b7fc1bd1d33b3
projects[calendar][subdir] = "contrib"

; email
projects[mailsystem][version] = 2.34
projects[mailsystem][subdir] = "contrib"
projects[mimemail][version] = 1.0-beta3
projects[mimemail][subdir] = "contrib"

; content
projects[pathauto][version] = 1.2
projects[pathauto][subdir] = "contrib"
projects[pathologic][type] = "module"
projects[pathologic][subdir] = "contrib"
projects[pathologic][download][type] = "git"
projects[pathologic][download][branch] = "7.x-2.x"
projects[pathologic][download][revision] = "3d0305965e9885c6264d067434023a9a0e622977"
projects[wysiwyg][type] = "module"
projects[wysiwyg][subdir] = "contrib"
projects[wysiwyg][download][type] = "git"
projects[wysiwyg][download][branch] = "7.x-2.x"
projects[wysiwyg][download][revision] = "37dc07db900cac540f30bca5d90bb75951cc314f"
projects[ckeditor][version] = 1.16
projects[ckeditor][subdir] = "contrib"

; Media
projects[media][subdir] = "contrib"
projects[media][type] = "module"
projects[media][download][type] = "git"
projects[media][download][branch] = "7.x-2.x"
projects[media][download][revision] = "5d7ed633439e2ddd633a5e35fa5442743eeb0df0"
projects[colorbox][subdir] = "contrib"
projects[colorbox][version] = 2.8
projects[media_colorbox][subdir] = "contrib"
projects[media_colorbox][type] = "module"
projects[media_colorbox][download][type] = "git"
projects[media_colorbox][download][branch] = "7.x-1.x"
projects[media_colorbox][download][revision] = "d018199fc4fd94d21d3f92233955747f7260c7fe"
projects[media_colorbox][patch][] = "https://www.drupal.org/files/issues/media_colorbox_wysiwyg-1888198-24.patch"
projects[media_youtube][type] = module
projects[media_youtube][subdir] = "contrib"
projects[media_youtube][download][type] = git
projects[media_youtube][download][branch] = 7.x-2.x
projects[media_youtube][download][revision] = "187283f0e24a668daaaebcfb886bcb9558d68056"
projects[adaptive_image][type] = module
projects[adaptive_image][subdir] = "contrib"
projects[adaptive_image][download][type] = git
projects[adaptive_image][download][branch] = 7.x-1.x
projects[adaptive_image][download][revision] = "4ff45fc126dc6ffbaa68414d6261e2106f5a2638"

; Remain on dev until 2.0-alpha4
projects[file_entity][subdir] = "contrib"
projects[file_entity][type] = "module"
projects[file_entity][download][type] = "git"
projects[file_entity][download][branch] = "7.x-2.x"
projects[file_entity][download][revision] = "1e037ada7f783058aa460cf90421b809ba04d0a7"

; commerce modules
projects[commerce][version] = 1.11
projects[commerce][subdir] = "contrib"
projects[commerce_order_reference][version] = 1.0-alpha1
projects[commerce_order_reference][subdir] = "contrib"
projects[commerce_features][version] = 1.0
projects[commerce_features][subdir] = "contrib"
projects[commerce_custom_product][version] = 1.0-beta2
projects[commerce_custom_product][subdir] = "contrib"
projects[commerce_authnet][version] = 1.1
projects[commerce_authnet][subdir] = "contrib"
projects[commerce_paypal][version] = 2.3
projects[commerce_paypal][subdir] = "contrib"

; data visualization
projects[flot][type] = module
projects[flot][subdir] = "contrib"
projects[flot][download][type] = git
projects[flot][download][branch] = 7.x-1.x
projects[flot][download][revision] = "516ecd418878d3a10abd38342862a4fafdf12179"
projects[flot][patch][] = "https://www.drupal.org/files/flot-php54compat_0.patch"
projects[flot][patch][] = "https://www.drupal.org/files/flot-pie_options-2088021-3.patch"
projects[views_data_export][subdir] = "contrib"
projects[views_data_export][version] = 3.0-beta8

; geocoding
projects[geocoder][type] = module
projects[geocoder][subdir] = "contrib"
projects[geocoder][download][type] = git
projects[geocoder][download][branch] = 7.x-1.x
projects[geocoder][download][revision] = "c1a79dc5738030f714254fd58e74659582eae2ff"
projects[geofield][subdir] = "contrib"
projects[geofield][version] = "2.3"
projects[geophp][type] = module
projects[geophp][subdir] = "contrib"
projects[geophp][download][type] = git
projects[geophp][download][branch] = 7.x-1.x
projects[geophp][download][revision] = "f8c09edb30140ab823dd0c899f29d2408d216bcd"
projects[openlayers][subdir] = "contrib"
projects[openlayers][version] = "2.0-beta11"
projects[proj4js][subdir] = "contrib"
projects[proj4js][version] = "1.2"

; other
projects[boxes][subdir] = "contrib"
projects[boxes][version] = "1.2"
projects[compact_forms][subdir] = "contrib"
projects[compact_forms][version] = "1.0"
projects[fontyourface][subdir] = "contrib"
projects[fontyourface][version] = "2.8"
projects[google_fonts][subdir] = "contrib"
projects[google_fonts][version] = "2.3"

; crm core modules
projects[crm_core][version] = 0.980
projects[crm_core][subdir] = "contrib"
projects[crm_core_profile][version] = 1.0-beta10
projects[crm_core_profile][subdir] = "contrib"
projects[crm_core_profile_commerce_items][version] = 0.4
projects[crm_core_profile_commerce_items][subdir] = "contrib"
projects[crm_core_demo_standard_fields][version] = 1.3
projects[crm_core_demo_standard_fields][subdir] = "contrib"
; donations
projects[crm_core_donation][version] = 1.14
projects[crm_core_donation][subdir] = "contrib"
; events
projects[crm_core_event][version] = 0.13
projects[crm_core_event][subdir] = "contrib"
; petitions
projects[crm_core_petition][version] = 0.12
projects[crm_core_petition][subdir] = "contrib"
; volunteers
projects[crm_core_volunteer][version] = 0.14
projects[crm_core_volunteer][subdir] = "contrib"

; libraries
; flot
libraries[flot][download][type] = get
libraries[flot][download][url] = https://flot.googlecode.com/files/flot-0.7.tar.gz
libraries[flot][destination] = modules/contrib/flot
; CKEditor
libraries[ckeditor][download][type] = get
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%204.4.4/ckeditor_4.4.4_full.zip"
; Colorbox
libraries[colorbox][download][type] = get
libraries[colorbox][download][url] = "https://github.com/jackmoore/colorbox/archive/1.5.13.tar.gz"

; sample content
projects[uuid][version] = 1.0-alpha6
projects[uuid][subdir] = "contrib"
projects[uuid][patch][] = "https://www.drupal.org/files/issues/uuid-empty_file-2121031-1.patch"
projects[deploy][type] = module
projects[deploy][subdir] = "contrib"
projects[deploy][download][type] = git
projects[deploy][download][branch] = 7.x-2.x
projects[deploy][download][revision] = "ae36dfd824c105359437a9cbcfa1857038136d8b"
projects[entity_dependency][type] = module
projects[entity_dependency][subdir] = "contrib"
projects[entity_dependency][download][type] = git
projects[entity_dependency][download][branch] = 7.x-1.x
projects[entity_dependency][download][revision] = "4139d7cb34304e7d1515b5dc1d4a0ab5fe15808d"
projects[entity_menu_links][type] = module
projects[entity_menu_links][subdir] = "contrib"
projects[entity_menu_links][download][type] = git
projects[entity_menu_links][download][branch] = 7.x-1.x
projects[entity_menu_links][download][revision] = "f712798c0357ecab2b45d3ce91170f0ef2be86c6"

;themes
projects[omega] = 3.1
projects[zen] = 5.5
