root_dir = os.getcwd()
build_dir = path.join(root_dir, 'build')
bin_dir = path.join(build_dir, 'bin')
lib_dir = path.join(build_dir, 'lib')
obj_dir = path.join(build_dir, 'obj')
project_dir = path.join(root_dir, 'projects')

solution 'Primer'
  configurations {'Debug', 'Release'}
  language 'C++'
  location (project_dir)
  targetdir (bin_dir)
  startproject '1.03'
  objdir (obj_dir)
  vpaths
  {
    ['Header Files'] = {'**.h'},
    ['Source Files'] = {'**.cpp', '**.c'}
  }
  platforms {'x86', 'x86_64'}
  filter 'platforms:x86'
    architecture 'x86'
  filter 'platforms:x86_64'
    architecture 'x86_64'
  configuration 'Debug'
    flags{'Symbols'}
  configuration 'Release'
    flags{'Optimize'}


group "Chapter 1"
  project '1.03'
  kind "ConsoleApp"
  location (path.join(project_dir, "Chapter 1"))
  files{
    'source/cpp.primer.5th.edition/chapter.1/1.03.cpp'
  }
  includedirs{}

group 'Chapter 2'
  project '2.04'
  kind "ConsoleApp"
  location (path.join(project_dir, "Chapter 2"))
  files{
    'source/cpp.primer.5th.edition/chapter.2/2.04.cpp'
  }
  includedirs{}

  project '2.05'
  kind "ConsoleApp"
  location (path.join(project_dir, "Chapter 2"))
  files{
    'source/cpp.primer.5th.edition/chapter.2/2.05.cpp'
  }
  includedirs{}

  project '2.08'
  kind "ConsoleApp"
  location (path.join(project_dir, "Chapter 2"))
  files{
    'source/cpp.primer.5th.edition/chapter.2/2.08.cpp'
  }
  includedirs{}

  project '2.18'
  kind "ConsoleApp"
  location (path.join(project_dir, "Chapter 2"))
  files{
    'source/cpp.primer.5th.edition/chapter.2/2.18.cpp'
  }
  includedirs{}

  project '2.34'
  kind "ConsoleApp"
  location (path.join(project_dir, "Chapter 2"))
  files{
    'source/cpp.primer.5th.edition/chapter.2/2.34.cpp'
  }
  includedirs{}

  project '2.35'
  kind "ConsoleApp"
  location (path.join(project_dir, "Chapter 2"))
  files{
    'source/cpp.primer.5th.edition/chapter.2/2.35.cpp'
  }
  includedirs{}

  project '2.39'
  kind "ConsoleApp"
  location (path.join(project_dir, "Chapter 2"))
  files{
    'source/cpp.primer.5th.edition/chapter.2/2.39.cpp'
  }
  includedirs{}

  project '2.40'
  kind "ConsoleApp"
  location (path.join(project_dir, "Chapter 2"))
  files{
    'source/cpp.primer.5th.edition/chapter.2/2.40.cpp'
  }
  includedirs{}

  project '2.41'
  kind "ConsoleApp"
  location (path.join(project_dir, "Chapter 2"))
  files{
    'source/cpp.primer.5th.edition/chapter.2/2.41.cpp'
  }
  includedirs{}

  project '2.42'
  kind "ConsoleApp"
  location (path.join(project_dir, "Chapter 2"))
  files{
    'source/cpp.primer.5th.edition/chapter.2/2.42.cpp'
  }
  includedirs{}


group 'Chapter 3'
  project '3.01'
  kind "ConsoleApp"
  location (path.join(project_dir, "Chapter 3"))
  files{
    'source/cpp.primer.5th.edition/chapter.3/3.01.cpp'
  }
  includedirs{}

  project '3.02'
  kind "ConsoleApp"
  location (path.join(project_dir, "Chapter 3"))
  files{
    'source/cpp.primer.5th.edition/chapter.3/3.02.cpp'
  }
  includedirs{}

  project '3.04'
  kind "ConsoleApp"
  location (path.join(project_dir, "Chapter 3"))
  files{
    'source/cpp.primer.5th.edition/chapter.3/3.04.cpp'
  }
  includedirs{}

  project '3.05'
  kind "ConsoleApp"
  location (path.join(project_dir, "Chapter 3"))
  files{
    'source/cpp.primer.5th.edition/chapter.3/3.05.cpp'
  }
  includedirs{}

  project '3.06'
  kind "ConsoleApp"
  location (path.join(project_dir, "Chapter 3"))
  files{
    'source/cpp.primer.5th.edition/chapter.3/3.06.cpp'
  }
  includedirs{}

  project '3.08'
  kind "ConsoleApp"
  location (path.join(project_dir, "Chapter 3"))
  files{
    'source/cpp.primer.5th.edition/chapter.3/3.08.cpp'
  }
  includedirs{}

  project '3.10'
  kind "ConsoleApp"
  location (path.join(project_dir, "Chapter 3"))
  files{
    'source/cpp.primer.5th.edition/chapter.3/3.10.cpp'
  }
  includedirs{}

  project '3.14'
  kind "ConsoleApp"
  location (path.join(project_dir, "Chapter 3"))
  files{
    'source/cpp.primer.5th.edition/chapter.3/3.14.cpp'
  }
  includedirs{}

  project '3.15'
  kind "ConsoleApp"
  location (path.join(project_dir, "Chapter 3"))
  files{
    'source/cpp.primer.5th.edition/chapter.3/3.15.cpp'
  }
  includedirs{}

  project '3.16'
  kind "ConsoleApp"
  location (path.join(project_dir, "Chapter 3"))
  files{
    'source/cpp.primer.5th.edition/chapter.3/3.16.cpp'
  }
  includedirs{}

  project '3.17'
  kind "ConsoleApp"
  location (path.join(project_dir, "Chapter 3"))
  files{
    'source/cpp.primer.5th.edition/chapter.3/3.17.cpp'
  }
  includedirs{}

  project '3.20'
  kind "ConsoleApp"
  location (path.join(project_dir, "Chapter 3"))
  files{
    'source/cpp.primer.5th.edition/chapter.3/3.20.cpp'
  }
  includedirs{}
  project '3.21'
  kind "ConsoleApp"
  location (path.join(project_dir, "Chapter 3"))
  files{
    'source/cpp.primer.5th.edition/chapter.3/3.21.cpp'
  }
  includedirs{}

  project '3.23'
  kind "ConsoleApp"
  location (path.join(project_dir, "Chapter 3"))
  files{
    'source/cpp.primer.5th.edition/chapter.3/3.23.cpp'
  }
  includedirs{}

  project '3.24'
  kind "ConsoleApp"
  location (path.join(project_dir, "Chapter 3"))
  files{
    'source/cpp.primer.5th.edition/chapter.3/3.24.cpp'
  }
  includedirs{}

  project '3.25'
  kind "ConsoleApp"
  location (path.join(project_dir, "Chapter 3"))
  files{
    'source/cpp.primer.5th.edition/chapter.3/3.25.cpp'
  }
  includedirs{}

  project '3.31'
  kind "ConsoleApp"
  location (path.join(project_dir, "Chapter 3"))
  files{
    'source/cpp.primer.5th.edition/chapter.3/3.31.cpp'
  }
  includedirs{}

  project '3.32'
  kind "ConsoleApp"
  location (path.join(project_dir, "Chapter 3"))
  files{
    'source/cpp.primer.5th.edition/chapter.3/3.32.cpp'
  }
  includedirs{}

  project '3.35'
  kind "ConsoleApp"
  location (path.join(project_dir, "Chapter 3"))
  files{
    'source/cpp.primer.5th.edition/chapter.3/3.35.cpp'
  }
  includedirs{}

  project '3.36'
  kind "ConsoleApp"
  location (path.join(project_dir, "Chapter 3"))
  files{
    'source/cpp.primer.5th.edition/chapter.3/3.36.cpp'
  }
  includedirs{}

  project '3.39'
  kind "ConsoleApp"
  location (path.join(project_dir, "Chapter 3"))
  files{
    'source/cpp.primer.5th.edition/chapter.3/3.39.cpp'
  }
  includedirs{}

  project '3.40'
  kind "ConsoleApp"
  location (path.join(project_dir, "Chapter 3"))
  files{
    'source/cpp.primer.5th.edition/chapter.3/3.40.cpp'
  }
  includedirs{}

  project '3.41'
  kind "ConsoleApp"
  location (path.join(project_dir, "Chapter 3"))
  files{
    'source/cpp.primer.5th.edition/chapter.3/3.41.cpp'
  }
  includedirs{}

  project '3.42'
  kind "ConsoleApp"
  location (path.join(project_dir, "Chapter 3"))
  files{
    'source/cpp.primer.5th.edition/chapter.3/3.42.cpp'
  }
  includedirs{}
  
group 'Chapter 4'
  project '4.04'
  kind "ConsoleApp"
  location (path.join(project_dir, "Chapter 4"))
  files{
    'source/cpp.primer.5th.edition/chapter.4/4.04.cpp'
  }
  includedirs{}
  
  project '4.21'
  kind "ConsoleApp"
  location (path.join(project_dir, "Chapter 4"))
  files{
    'source/cpp.primer.5th.edition/chapter.4/4.21.cpp'
  }
  includedirs{}

  project '4.28'
  kind "ConsoleApp"
  location (path.join(project_dir, "Chapter 4"))
  files{
    'source/cpp.primer.5th.edition/chapter.4/4.28.cpp'
  }
  includedirs{}
  
group 'Chapter 5'
  project '5.05'
  kind "ConsoleApp"
  location (path.join(project_dir, "Chapter 5"))
  files{
    'source/cpp.primer.5th.edition/chapter.5/5.05.cpp'
  }
  includedirs{}
  
  project '5.06'
  kind "ConsoleApp"
  location (path.join(project_dir, "Chapter 5"))
  files{
    'source/cpp.primer.5th.edition/chapter.5/5.06.cpp'
  }
  includedirs{}
  
  project '5.08'
  kind "ConsoleApp"
  location (path.join(project_dir, "Chapter 5"))
  files{
    'source/cpp.primer.5th.edition/chapter.5/5.08.cpp'
  }
  includedirs{}
  
  project '5.09'
  kind "ConsoleApp"
  location (path.join(project_dir, "Chapter 5"))
  files{
    'source/cpp.primer.5th.edition/chapter.5/5.09.cpp'
  }
  includedirs{}
  
  project '5.10'
  kind "ConsoleApp"
  location (path.join(project_dir, "Chapter 5"))
  files{
    'source/cpp.primer.5th.edition/chapter.5/5.10.cpp'
  }
  includedirs{}
  
  project '5.11'
  kind "ConsoleApp"
  location (path.join(project_dir, "Chapter 5"))
  files{
    'source/cpp.primer.5th.edition/chapter.5/5.11.cpp'
  }
  includedirs{}
  
  project '5.14'
  kind "ConsoleApp"
  location (path.join(project_dir, "Chapter 5"))
  files{
    'source/cpp.primer.5th.edition/chapter.5/5.14.cpp'
  }
  includedirs{}
  
  project '5.17'
  kind "ConsoleApp"
  location (path.join(project_dir, "Chapter 5"))
  files{
    'source/cpp.primer.5th.edition/chapter.5/5.17.cpp'
  }
  includedirs{}
  
  project '5.19'
  kind "ConsoleApp"
  location (path.join(project_dir, "Chapter 5"))
  files{
    'source/cpp.primer.5th.edition/chapter.5/5.19.cpp'
  }
  includedirs{}
  
  project '5.20'
  kind "ConsoleApp"
  location (path.join(project_dir, "Chapter 5"))
  files{
    'source/cpp.primer.5th.edition/chapter.5/5.20.cpp'
  }
  includedirs{}

  project '5.23'
  kind "ConsoleApp"
  location (path.join(project_dir, "Chapter 5"))
  files{
    'source/cpp.primer.5th.edition/chapter.5/5.23.cpp'
  }
  includedirs{}
  
group 'Chapter 6'
  project '6.03'
  kind "ConsoleApp"
  location (path.join(project_dir, "Chapter 6"))
  files{
    'source/cpp.primer.5th.edition/chapter.6/6.03.cpp'
  }
  includedirs{}

  project '6.04'
  kind "ConsoleApp"
  location (path.join(project_dir, "Chapter 6"))
  files{
    'source/cpp.primer.5th.edition/chapter.6/6.04.cpp'
  }
  
  project '6.05'
  kind "ConsoleApp"
  location (path.join(project_dir, "Chapter 6"))
  files{
    'source/cpp.primer.5th.edition/chapter.6/6.05.cpp'
  }
  includedirs{}
  
  project '6.07'
  kind "ConsoleApp"
  location (path.join(project_dir, "Chapter 6"))
  files{
    'source/cpp.primer.5th.edition/chapter.6/6.07.cpp'
  }
  includedirs{}
  
  project '6.10'
  kind "ConsoleApp"
  location (path.join(project_dir, "Chapter 6"))
  files{
    'source/cpp.primer.5th.edition/chapter.6/6.10.cpp'
  }
  includedirs{}
  
  project '6.10'
  kind "ConsoleApp"
  location (path.join(project_dir, "Chapter 6"))
  files{
    'source/cpp.primer.5th.edition/chapter.6/6.10.cpp'
  }
  includedirs{}
  
  project '6.11'
  kind "ConsoleApp"
  location (path.join(project_dir, "Chapter 6"))
  files{
    'source/cpp.primer.5th.edition/chapter.6/6.11.cpp'
  }
  includedirs{}
  
  project '6.17'
  kind "ConsoleApp"
  location (path.join(project_dir, "Chapter 6"))
  files{
    'source/cpp.primer.5th.edition/chapter.6/6.17.cpp'
  }
  includedirs{}
  
  project '6.18'
  kind "ConsoleApp"
  location (path.join(project_dir, "Chapter 6"))
  files{
    'source/cpp.primer.5th.edition/chapter.6/6.18.cpp'
  }
  includedirs{}
  
  project '6.21'
  kind "ConsoleApp"
  location (path.join(project_dir, "Chapter 6"))
  files{
    'source/cpp.primer.5th.edition/chapter.6/6.21.cpp'
  }
  includedirs{}
  
  project '6.22'
  kind "ConsoleApp"
  location (path.join(project_dir, "Chapter 6"))
  files{
    'source/cpp.primer.5th.edition/chapter.6/6.22.cpp'
  }
  includedirs{}
  
  project '6.23'
  kind "ConsoleApp"
  location (path.join(project_dir, "Chapter 6"))
  files{
    'source/cpp.primer.5th.edition/chapter.6/6.23.cpp'
  }
  includedirs{}
  
  project '6.25'
  kind "ConsoleApp"
  location (path.join(project_dir, "Chapter 6"))
  files{
    'source/cpp.primer.5th.edition/chapter.6/6.25.cpp'
  }
  includedirs{}
  
  project '6.26'
  kind "ConsoleApp"
  location (path.join(project_dir, "Chapter 6"))
  files{
    'source/cpp.primer.5th.edition/chapter.6/6.26.cpp'
  }
  includedirs{}
  
  project '6.33'
  kind "ConsoleApp"
  location (path.join(project_dir, "Chapter 6"))
  files{
    'source/cpp.primer.5th.edition/chapter.6/6.33.cpp'
  }
  includedirs{}
  
  project '6.44'
  kind "ConsoleApp"
  location (path.join(project_dir, "Chapter 6"))
  files{
    'source/cpp.primer.5th.edition/chapter.6/6.44.cpp'
  }
  includedirs{}
  
  project '6.51'
  kind "ConsoleApp"
  location (path.join(project_dir, "Chapter 6"))
  files{
    'source/cpp.primer.5th.edition/chapter.6/6.51.cpp'
  }
  includedirs{}
  
  project '6.54'
  kind "ConsoleApp"
  location (path.join(project_dir, "Chapter 6"))
  files{
    'source/cpp.primer.5th.edition/chapter.6/6.54.cpp'
  }
  includedirs{}
  
  project '6.55'
  kind "ConsoleApp"
  location (path.join(project_dir, "Chapter 6"))
  files{
    'source/cpp.primer.5th.edition/chapter.6/6.55.cpp'
  }
  includedirs{}
  
  project '6.56'
  kind "ConsoleApp"
  location (path.join(project_dir, "Chapter 6"))
  files{
    'source/cpp.primer.5th.edition/chapter.6/6.56.cpp'
  }
  includedirs{}

group 'Chapter 7'
  project '7.01'
  kind "ConsoleApp"
  location (path.join(project_dir, "Chapter 7"))
  files{
    'source/cpp.primer.5th.edition/chapter.7/7.01.cpp',
    'source/cpp.primer.5th.edition/chapter.7/*.h'
  }
  includedirs{}

  project '7.02'
  kind "ConsoleApp"
  location (path.join(project_dir, "Chapter 7"))
  files{
    'source/cpp.primer.5th.edition/chapter.7/7.02.cpp',
    'source/cpp.primer.5th.edition/chapter.7/*.h'
  }
  includedirs{}

  project '7.03'
  kind "ConsoleApp"
  location (path.join(project_dir, "Chapter 7"))
  files{
    'source/cpp.primer.5th.edition/chapter.7/7.03.cpp',
    'source/cpp.primer.5th.edition/chapter.7/*.h'
  }
  includedirs{}
