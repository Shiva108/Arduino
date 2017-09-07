



<!DOCTYPE html>
<html lang="en" class="">
  <head prefix="og: http://ogp.me/ns# fb: http://ogp.me/ns/fb# object: http://ogp.me/ns/object# article: http://ogp.me/ns/article# profile: http://ogp.me/ns/profile#">
    <meta charset='utf-8'>
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta http-equiv="Content-Language" content="en">
    
    
    <title>SevSeg/README.md at master · DeanIsMe/SevSeg · GitHub</title>
    <link rel="search" type="application/opensearchdescription+xml" href="/opensearch.xml" title="GitHub">
    <link rel="fluid-icon" href="https://github.com/fluidicon.png" title="GitHub">
    <link rel="apple-touch-icon" sizes="57x57" href="/apple-touch-icon-114.png">
    <link rel="apple-touch-icon" sizes="114x114" href="/apple-touch-icon-114.png">
    <link rel="apple-touch-icon" sizes="72x72" href="/apple-touch-icon-144.png">
    <link rel="apple-touch-icon" sizes="144x144" href="/apple-touch-icon-144.png">
    <meta property="fb:app_id" content="1401488693436528">

      <meta content="@github" name="twitter:site" /><meta content="summary" name="twitter:card" /><meta content="DeanIsMe/SevSeg" name="twitter:title" /><meta content="SevSeg - Seven segment display controller library for Arduino" name="twitter:description" /><meta content="https://avatars2.githubusercontent.com/u/4307776?v=3&amp;s=400" name="twitter:image:src" />
<meta content="GitHub" property="og:site_name" /><meta content="object" property="og:type" /><meta content="https://avatars2.githubusercontent.com/u/4307776?v=3&amp;s=400" property="og:image" /><meta content="DeanIsMe/SevSeg" property="og:title" /><meta content="https://github.com/DeanIsMe/SevSeg" property="og:url" /><meta content="SevSeg - Seven segment display controller library for Arduino" property="og:description" />

      <meta name="browser-stats-url" content="/_stats">
    <link rel="assets" href="https://assets-cdn.github.com/">
    <link rel="conduit-xhr" href="https://ghconduit.com:25035">
    
    <meta name="pjax-timeout" content="1000">
    

    <meta name="msapplication-TileImage" content="/windows-tile.png">
    <meta name="msapplication-TileColor" content="#ffffff">
    <meta name="selected-link" value="repo_source" data-pjax-transient>
      <meta name="google-analytics" content="UA-3769691-2">

    <meta content="collector.githubapp.com" name="octolytics-host" /><meta content="collector-cdn.github.com" name="octolytics-script-host" /><meta content="github" name="octolytics-app-id" /><meta content="D4625A6A:1D6C:5E65DD9:54C0AA4F" name="octolytics-dimension-request_id" />
    
    <meta content="Rails, view, blob#show" name="analytics-event" />

    
    
    <link rel="icon" type="image/x-icon" href="https://assets-cdn.github.com/favicon.ico">


    <meta content="authenticity_token" name="csrf-param" />
<meta content="l45kI7a4L9ehccg9Wz07/WXE61mWSbYDtDRh+Ty82vis//hngM6KIj7rR5YiLKFQ71Ned1IwNK9WoJcE/1BsUg==" name="csrf-token" />

    <link href="https://assets-cdn.github.com/assets/github-3b24b9ac37e087c9b13ad8d84820250a93a4fd610eb6e7535e8b12d0cb87836d.css" media="all" rel="stylesheet" type="text/css" />
    <link href="https://assets-cdn.github.com/assets/github2-0adb277c3e0f5609666d7512f78f267969a5308b562c1ff52296b9f0502ae547.css" media="all" rel="stylesheet" type="text/css" />
    
    


    <meta http-equiv="x-pjax-version" content="b8d6f2ef6b69e2b74cd8086c89e9a84e">

      
  <meta name="description" content="SevSeg - Seven segment display controller library for Arduino">
  <meta name="go-import" content="github.com/DeanIsMe/SevSeg git https://github.com/DeanIsMe/SevSeg.git">

  <meta content="4307776" name="octolytics-dimension-user_id" /><meta content="DeanIsMe" name="octolytics-dimension-user_login" /><meta content="27167204" name="octolytics-dimension-repository_id" /><meta content="DeanIsMe/SevSeg" name="octolytics-dimension-repository_nwo" /><meta content="true" name="octolytics-dimension-repository_public" /><meta content="false" name="octolytics-dimension-repository_is_fork" /><meta content="27167204" name="octolytics-dimension-repository_network_root_id" /><meta content="DeanIsMe/SevSeg" name="octolytics-dimension-repository_network_root_nwo" />
  <link href="https://github.com/DeanIsMe/SevSeg/commits/master.atom" rel="alternate" title="Recent Commits to SevSeg:master" type="application/atom+xml">

  </head>


  <body class="logged_out  env-production windows vis-public page-blob">
    <a href="#start-of-content" tabindex="1" class="accessibility-aid js-skip-to-content">Skip to content</a>
    <div class="wrapper">
      
      
      
      


      
      <div class="header header-logged-out" role="banner">
  <div class="container clearfix">

    <a class="header-logo-wordmark" href="https://github.com/" ga-data-click="(Logged out) Header, go to homepage, icon:logo-wordmark">
      <span class="mega-octicon octicon-logo-github"></span>
    </a>

    <div class="header-actions" role="navigation">
        <a class="button primary" href="/join" data-ga-click="(Logged out) Header, clicked Sign up, text:sign-up">Sign up</a>
      <a class="button" href="/login?return_to=%2FDeanIsMe%2FSevSeg%2Fblob%2Fmaster%2FREADME.md" data-ga-click="(Logged out) Header, clicked Sign in, text:sign-in">Sign in</a>
    </div>

    <div class="site-search repo-scope js-site-search" role="search">
      <form accept-charset="UTF-8" action="/DeanIsMe/SevSeg/search" class="js-site-search-form" data-global-search-url="/search" data-repo-search-url="/DeanIsMe/SevSeg/search" method="get"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /></div>
  <input type="text"
    class="js-site-search-field is-clearable"
    data-hotkey="s"
    name="q"
    placeholder="Search"
    data-global-scope-placeholder="Search GitHub"
    data-repo-scope-placeholder="Search"
    tabindex="1"
    autocapitalize="off">
  <div class="scope-badge">This repository</div>
</form>
    </div>

      <ul class="header-nav left" role="navigation">
          <li class="header-nav-item">
            <a class="header-nav-link" href="/explore" data-ga-click="(Logged out) Header, go to explore, text:explore">Explore</a>
          </li>
          <li class="header-nav-item">
            <a class="header-nav-link" href="/features" data-ga-click="(Logged out) Header, go to features, text:features">Features</a>
          </li>
          <li class="header-nav-item">
            <a class="header-nav-link" href="https://enterprise.github.com/" data-ga-click="(Logged out) Header, go to enterprise, text:enterprise">Enterprise</a>
          </li>
          <li class="header-nav-item">
            <a class="header-nav-link" href="/blog" data-ga-click="(Logged out) Header, go to blog, text:blog">Blog</a>
          </li>
      </ul>

  </div>
</div>



      <div id="start-of-content" class="accessibility-aid"></div>
          <div class="site" itemscope itemtype="http://schema.org/WebPage">
    <div id="js-flash-container">
      
    </div>
    <div class="pagehead repohead instapaper_ignore readability-menu">
      <div class="container">
        
<ul class="pagehead-actions">


  <li>
      <a href="/login?return_to=%2FDeanIsMe%2FSevSeg"
    class="minibutton with-count star-button tooltipped tooltipped-n"
    aria-label="You must be signed in to star a repository" rel="nofollow">
    <span class="octicon octicon-star"></span>
    Star
  </a>

    <a class="social-count js-social-count" href="/DeanIsMe/SevSeg/stargazers">
      2
    </a>

  </li>

    <li>
      <a href="/login?return_to=%2FDeanIsMe%2FSevSeg"
        class="minibutton with-count js-toggler-target fork-button tooltipped tooltipped-n"
        aria-label="You must be signed in to fork a repository" rel="nofollow">
        <span class="octicon octicon-repo-forked"></span>
        Fork
      </a>
      <a href="/DeanIsMe/SevSeg/network" class="social-count">
        1
      </a>
    </li>
</ul>

        <h1 itemscope itemtype="http://data-vocabulary.org/Breadcrumb" class="entry-title public">
          <span class="mega-octicon octicon-repo"></span>
          <span class="author"><a href="/DeanIsMe" class="url fn" itemprop="url" rel="author"><span itemprop="title">DeanIsMe</span></a></span><!--
       --><span class="path-divider">/</span><!--
       --><strong><a href="/DeanIsMe/SevSeg" class="js-current-repository" data-pjax="#js-repo-pjax-container">SevSeg</a></strong>

          <span class="page-context-loader">
            <img alt="" height="16" src="https://assets-cdn.github.com/images/spinners/octocat-spinner-32.gif" width="16" />
          </span>

        </h1>
      </div><!-- /.container -->
    </div><!-- /.repohead -->

    <div class="container">
      <div class="repository-with-sidebar repo-container new-discussion-timeline  ">
        <div class="repository-sidebar clearfix">
            
<nav class="sunken-menu repo-nav js-repo-nav js-sidenav-container-pjax js-octicon-loaders"
     role="navigation"
     data-pjax="#js-repo-pjax-container"
     data-issue-count-url="/DeanIsMe/SevSeg/issues/counts">
  <ul class="sunken-menu-group">
    <li class="tooltipped tooltipped-w" aria-label="Code">
      <a href="/DeanIsMe/SevSeg" aria-label="Code" class="selected js-selected-navigation-item sunken-menu-item" data-hotkey="g c" data-selected-links="repo_source repo_downloads repo_commits repo_releases repo_tags repo_branches /DeanIsMe/SevSeg">
        <span class="octicon octicon-code"></span> <span class="full-word">Code</span>
        <img alt="" class="mini-loader" height="16" src="https://assets-cdn.github.com/images/spinners/octocat-spinner-32.gif" width="16" />
</a>    </li>

      <li class="tooltipped tooltipped-w" aria-label="Issues">
        <a href="/DeanIsMe/SevSeg/issues" aria-label="Issues" class="js-selected-navigation-item sunken-menu-item" data-hotkey="g i" data-selected-links="repo_issues repo_labels repo_milestones /DeanIsMe/SevSeg/issues">
          <span class="octicon octicon-issue-opened"></span> <span class="full-word">Issues</span>
          <span class="js-issue-replace-counter"></span>
          <img alt="" class="mini-loader" height="16" src="https://assets-cdn.github.com/images/spinners/octocat-spinner-32.gif" width="16" />
</a>      </li>

    <li class="tooltipped tooltipped-w" aria-label="Pull Requests">
      <a href="/DeanIsMe/SevSeg/pulls" aria-label="Pull Requests" class="js-selected-navigation-item sunken-menu-item" data-hotkey="g p" data-selected-links="repo_pulls /DeanIsMe/SevSeg/pulls">
          <span class="octicon octicon-git-pull-request"></span> <span class="full-word">Pull Requests</span>
          <span class="js-pull-replace-counter"></span>
          <img alt="" class="mini-loader" height="16" src="https://assets-cdn.github.com/images/spinners/octocat-spinner-32.gif" width="16" />
</a>    </li>


  </ul>
  <div class="sunken-menu-separator"></div>
  <ul class="sunken-menu-group">

    <li class="tooltipped tooltipped-w" aria-label="Pulse">
      <a href="/DeanIsMe/SevSeg/pulse" aria-label="Pulse" class="js-selected-navigation-item sunken-menu-item" data-selected-links="pulse /DeanIsMe/SevSeg/pulse">
        <span class="octicon octicon-pulse"></span> <span class="full-word">Pulse</span>
        <img alt="" class="mini-loader" height="16" src="https://assets-cdn.github.com/images/spinners/octocat-spinner-32.gif" width="16" />
</a>    </li>

    <li class="tooltipped tooltipped-w" aria-label="Graphs">
      <a href="/DeanIsMe/SevSeg/graphs" aria-label="Graphs" class="js-selected-navigation-item sunken-menu-item" data-selected-links="repo_graphs repo_contributors /DeanIsMe/SevSeg/graphs">
        <span class="octicon octicon-graph"></span> <span class="full-word">Graphs</span>
        <img alt="" class="mini-loader" height="16" src="https://assets-cdn.github.com/images/spinners/octocat-spinner-32.gif" width="16" />
</a>    </li>
  </ul>


</nav>

              <div class="only-with-full-nav">
                
  
<div class="clone-url open"
  data-protocol-type="http"
  data-url="/users/set_protocol?protocol_selector=http&amp;protocol_type=clone">
  <h3><span class="text-emphasized">HTTPS</span> clone URL</h3>
  <div class="input-group js-zeroclipboard-container">
    <input type="text" class="input-mini input-monospace js-url-field js-zeroclipboard-target"
           value="https://github.com/DeanIsMe/SevSeg.git" readonly="readonly">
    <span class="input-group-button">
      <button aria-label="Copy to clipboard" class="js-zeroclipboard minibutton zeroclipboard-button" data-copied-hint="Copied!" type="button"><span class="octicon octicon-clippy"></span></button>
    </span>
  </div>
</div>

  
<div class="clone-url "
  data-protocol-type="subversion"
  data-url="/users/set_protocol?protocol_selector=subversion&amp;protocol_type=clone">
  <h3><span class="text-emphasized">Subversion</span> checkout URL</h3>
  <div class="input-group js-zeroclipboard-container">
    <input type="text" class="input-mini input-monospace js-url-field js-zeroclipboard-target"
           value="https://github.com/DeanIsMe/SevSeg" readonly="readonly">
    <span class="input-group-button">
      <button aria-label="Copy to clipboard" class="js-zeroclipboard minibutton zeroclipboard-button" data-copied-hint="Copied!" type="button"><span class="octicon octicon-clippy"></span></button>
    </span>
  </div>
</div>



<p class="clone-options">You can clone with
  <a href="#" class="js-clone-selector" data-protocol="http">HTTPS</a> or <a href="#" class="js-clone-selector" data-protocol="subversion">Subversion</a>.
  <a href="https://help.github.com/articles/which-remote-url-should-i-use" class="help tooltipped tooltipped-n" aria-label="Get help on which URL is right for you.">
    <span class="octicon octicon-question"></span>
  </a>
</p>


  <a href="http://windows.github.com" class="minibutton sidebar-button" title="Save DeanIsMe/SevSeg to your computer and use it in GitHub Desktop." aria-label="Save DeanIsMe/SevSeg to your computer and use it in GitHub Desktop.">
    <span class="octicon octicon-device-desktop"></span>
    Clone in Desktop
  </a>

                <a href="/DeanIsMe/SevSeg/archive/master.zip"
                   class="minibutton sidebar-button"
                   aria-label="Download the contents of DeanIsMe/SevSeg as a zip file"
                   title="Download the contents of DeanIsMe/SevSeg as a zip file"
                   rel="nofollow">
                  <span class="octicon octicon-cloud-download"></span>
                  Download ZIP
                </a>
              </div>
        </div><!-- /.repository-sidebar -->

        <div id="js-repo-pjax-container" class="repository-content context-loader-container" data-pjax-container>
          

<a href="/DeanIsMe/SevSeg/blob/3b2ad3c4395c8fb0ec26fe8de87e3f907c758de5/README.md" class="hidden js-permalink-shortcut" data-hotkey="y">Permalink</a>

<!-- blob contrib key: blob_contributors:v21:e5bd7071c4b64ee1ab71577a0c1455e7 -->

<div class="file-navigation js-zeroclipboard-container">
  
<div class="select-menu js-menu-container js-select-menu left">
  <span class="minibutton select-menu-button js-menu-target css-truncate" data-hotkey="w"
    data-master-branch="master"
    data-ref="master"
    title="master"
    role="button" aria-label="Switch branches or tags" tabindex="0" aria-haspopup="true">
    <span class="octicon octicon-git-branch"></span>
    <i>branch:</i>
    <span class="js-select-button css-truncate-target">master</span>
  </span>

  <div class="select-menu-modal-holder js-menu-content js-navigation-container" data-pjax aria-hidden="true">

    <div class="select-menu-modal">
      <div class="select-menu-header">
        <span class="select-menu-title">Switch branches/tags</span>
        <span class="octicon octicon-x js-menu-close" role="button" aria-label="Close"></span>
      </div> <!-- /.select-menu-header -->

      <div class="select-menu-filters">
        <div class="select-menu-text-filter">
          <input type="text" aria-label="Filter branches/tags" id="context-commitish-filter-field" class="js-filterable-field js-navigation-enable" placeholder="Filter branches/tags">
        </div>
        <div class="select-menu-tabs">
          <ul>
            <li class="select-menu-tab">
              <a href="#" data-tab-filter="branches" class="js-select-menu-tab">Branches</a>
            </li>
            <li class="select-menu-tab">
              <a href="#" data-tab-filter="tags" class="js-select-menu-tab">Tags</a>
            </li>
          </ul>
        </div><!-- /.select-menu-tabs -->
      </div><!-- /.select-menu-filters -->

      <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket" data-tab-filter="branches">

        <div data-filterable-for="context-commitish-filter-field" data-filterable-type="substring">


            <div class="select-menu-item js-navigation-item selected">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/DeanIsMe/SevSeg/blob/master/README.md"
                 data-name="master"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="master">master</a>
            </div> <!-- /.select-menu-item -->
        </div>

          <div class="select-menu-no-results">Nothing to show</div>
      </div> <!-- /.select-menu-list -->

      <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket" data-tab-filter="tags">
        <div data-filterable-for="context-commitish-filter-field" data-filterable-type="substring">


        </div>

        <div class="select-menu-no-results">Nothing to show</div>
      </div> <!-- /.select-menu-list -->

    </div> <!-- /.select-menu-modal -->
  </div> <!-- /.select-menu-modal-holder -->
</div> <!-- /.select-menu -->

  <div class="button-group right">
    <a href="/DeanIsMe/SevSeg/find/master"
          class="js-show-file-finder minibutton empty-icon tooltipped tooltipped-s"
          data-pjax
          data-hotkey="t"
          aria-label="Quickly jump between files">
      <span class="octicon octicon-list-unordered"></span>
    </a>
    <button aria-label="Copy file path to clipboard" class="js-zeroclipboard minibutton zeroclipboard-button" data-copied-hint="Copied!" type="button"><span class="octicon octicon-clippy"></span></button>
  </div>

  <div class="breadcrumb js-zeroclipboard-target">
    <span class='repo-root js-repo-root'><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/DeanIsMe/SevSeg" class="" data-branch="master" data-direction="back" data-pjax="true" itemscope="url"><span itemprop="title">SevSeg</span></a></span></span><span class="separator">/</span><strong class="final-path">README.md</strong>
  </div>
</div>


  <div class="commit file-history-tease">
    <div class="file-history-tease-header">
        <img alt="Dean Reading" class="avatar" data-user="4307776" height="24" src="https://avatars0.githubusercontent.com/u/4307776?v=3&amp;s=48" width="24" />
        <span class="author"><a href="/DeanIsMe" rel="author">DeanIsMe</a></span>
        <time datetime="2014-12-02T03:39:58Z" is="relative-time">Dec 2, 2014</time>
        <div class="commit-title">
            <a href="/DeanIsMe/SevSeg/commit/5b049bde05d9997adab831cf20e0c91a7d446572" class="message" data-pjax="true" title="Minor formatting">Minor formatting</a>
        </div>
    </div>

    <div class="participation">
      <p class="quickstat">
        <a href="#blob_contributors_box" rel="facebox">
          <strong>1</strong>
           contributor
        </a>
      </p>
      
    </div>
    <div id="blob_contributors_box" style="display:none">
      <h2 class="facebox-header">Users who have contributed to this file</h2>
      <ul class="facebox-user-list">
          <li class="facebox-user-list-item">
            <img alt="Dean Reading" data-user="4307776" height="24" src="https://avatars0.githubusercontent.com/u/4307776?v=3&amp;s=48" width="24" />
            <a href="/DeanIsMe">DeanIsMe</a>
          </li>
      </ul>
    </div>
  </div>

<div class="file-box">
  <div class="file">
    <div class="meta clearfix">
      <div class="info file-name">
          <span>140 lines (80 sloc)</span>
          <span class="meta-divider"></span>
        <span>5.705 kb</span>
      </div>
      <div class="actions">
        <div class="button-group">
          <a href="/DeanIsMe/SevSeg/raw/master/README.md" class="minibutton " id="raw-url">Raw</a>
            <a href="/DeanIsMe/SevSeg/blame/master/README.md" class="minibutton js-update-url-with-hash">Blame</a>
          <a href="/DeanIsMe/SevSeg/commits/master/README.md" class="minibutton " rel="nofollow">History</a>
        </div><!-- /.button-group -->

          <a class="octicon-button tooltipped tooltipped-nw"
             href="http://windows.github.com" aria-label="Open this file in GitHub for Windows">
              <span class="octicon octicon-device-desktop"></span>
          </a>

            <a class="octicon-button disabled tooltipped tooltipped-w" href="#"
               aria-label="You must be signed in to make or propose changes"><span class="octicon octicon-pencil"></span></a>

          <a class="octicon-button danger disabled tooltipped tooltipped-w" href="#"
             aria-label="You must be signed in to make or propose changes">
          <span class="octicon octicon-trashcan"></span>
        </a>
      </div><!-- /.actions -->
    </div>
    
  <div id="readme" class="blob instapaper_body">
    <article class="markdown-body entry-content" itemprop="mainContentOfPage"><h1>
<a id="user-content-sevseg" class="anchor" href="#sevseg" aria-hidden="true"><span class="octicon octicon-link"></span></a>SevSeg</h1>

<p>Copyright 2014 Dean Reading</p>

<p>Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at 
 <a href="http://www.apache.org/licenses/LICENSE-2.0">http://www.apache.org/licenses/LICENSE-2.0</a></p>

<p>Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.</p>

<hr>

<p>This library turns your Arduino into a seven segment display controller! Use it to easily display numbers on your seven segment display without any additional controllers.</p>

<p>It supports common cathode and common anode displays, and the use of switching transistors. Displays with any number of digits can be used, and decimal places are supported.</p>

<p><a href="https://github.com/DeanIsMe/SevSeg">Download it from GitHub</a>.</p>

<p>Direct any questions or suggestions to <a href="mailto:deanreading@hotmail.com">deanreading@hotmail.com</a>. If I have the time, I'm happy to help you get things working.</p>

<h4>
<a id="user-content-previous-versions-note" class="anchor" href="#previous-versions-note" aria-hidden="true"><span class="octicon octicon-link"></span></a>Previous Versions Note</h4>

<p>This version is not compatible with previous versions of the SevSeg library, which have been available since 2012. You can download the <a href="https://docs.google.com/file/d/0Bwrp4uluZCpNdE9oWTY0M3BncTA/edit?usp=sharing">old version</a> for compatibility with previously written programs. .</p>

<p>Thanks to Mark Chambers and Nathan Seidle for code used in updates.</p>

<hr>

<h3>
<a id="user-content-hardware" class="anchor" href="#hardware" aria-hidden="true"><span class="octicon octicon-link"></span></a>HARDWARE</h3>

<h4>
<a id="user-content-seven-segment-display-pins" class="anchor" href="#seven-segment-display-pins" aria-hidden="true"><span class="octicon octicon-link"></span></a>Seven Segment Display Pins</h4>

<p>Your display should have:<br>
<strong>Digit Pins</strong> - One for each digit. These are the 'common pins'. They will be cathodes (negative pins) for common cathode displays, or anodes (positive pins) for common anode displays.<br>
<strong>8 Segment Pins</strong> - One for each of the seven segments plus the decimal point.</p>

<h4>
<a id="user-content-arduino-connections" class="anchor" href="#arduino-connections" aria-hidden="true"><span class="octicon octicon-link"></span></a>Arduino Connections</h4>

<p>All digit pins and segment pins can be connected to any of the Arduino's digital or analog pins; just make sure you take note of your connections!</p>

<h4>
<a id="user-content-current-limiting-resistors" class="anchor" href="#current-limiting-resistors" aria-hidden="true"><span class="octicon octicon-link"></span></a>Current-limiting Resistors</h4>

<p>Don't forget that the display uses LEDs, so you should use current-limiting resistors in series with the <em>digit pins</em>. 330 ohms is a safe value if you're unsure. If you use current-limiting resistors on the <em>segment pins</em> instead, then open up the SevSeg.h file and set RESISTORS_ON_SEGMENTS to 1 for optimal brightness.</p>

<h4>
<a id="user-content-hardware-configuration" class="anchor" href="#hardware-configuration" aria-hidden="true"><span class="octicon octicon-link"></span></a>Hardware Configuration</h4>

<p>You have to specify your hardware configuration to the library. The options are detailed below.</p>

<h5>
<a id="user-content-simple-low-power-displays" class="anchor" href="#simple-low-power-displays" aria-hidden="true"><span class="octicon octicon-link"></span></a>Simple, Low Power Displays</h5>

<p>These displays are powered directly through the Arduino output pins.<br>
<strong>COMMON_CATHODE</strong> - For common cathode displays without switches. These displays require a low voltage at the digit pin to illuminate the digit.<br>
<strong>COMMON_ANODE</strong> - For common anode displays without switches. These displays require a high voltage at the digit pin to illuminate the digit.</p>

<h5>
<a id="user-content-displays-with-switches" class="anchor" href="#displays-with-switches" aria-hidden="true"><span class="octicon octicon-link"></span></a>Displays with Switches</h5>

<p>Some displays (mostly bigger ones) use switching transistors, but most people won't have to worry about the configurations below.<br>
<strong>N_TRANSISTORS</strong> - If you use N-type transistors to sink current (or any other active-high, low-side switches).<br>
<strong>P_TRANSISTORS</strong> - If you use P-type transistors to supply current (or any other active-low, high-side switches).<br>
<strong>NP_COMMMON_CATHODE</strong> - If your setup uses N-type AND P-type transistors with a common cathode display.<br>
<strong>NP_COMMMON_ANODE</strong> - If your setup uses N-type AND P-type transistors with a common anode display.<br>
Note that use of active-high, high-side switches will have no impact on the configuration chosen. There are usually called high-side switches.</p>

<h4>
<a id="user-content-example-display" class="anchor" href="#example-display" aria-hidden="true"><span class="octicon octicon-link"></span></a>Example Display</h4>

<p>I have a cheap, 4-digit, common anode display from eBay, and the pins of the display are in the following order when viewed from the front:<br>
<strong>Top Row</strong><br>
1,a,f,2,3,b<br>
<strong>Bottom Row</strong><br>
e,d,dp,c,g,4<br>
Where the digit pins are 1-4 and the segment pins are a-g + dp</p>

<hr>

<h3>
<a id="user-content-software" class="anchor" href="#software" aria-hidden="true"><span class="octicon octicon-link"></span></a>SOFTWARE</h3>

<p>To install, copy the SevSeg folder into your arduino sketchbook-libraries folder. More detailed instructions are <a href="http://arduino.cc/en/Guide/Libraries">here</a>.</p>

<h4>
<a id="user-content-setting-up" class="anchor" href="#setting-up" aria-hidden="true"><span class="octicon octicon-link"></span></a>Setting Up</h4>

<pre><code> #include "SevSeg.h"
 SevSeg sevseg; //Instantiate a seven segment object

void setup() {
   byte numDigits = 4;
   byte digitPins[] = {2, 3, 4, 5};
   byte segmentPins[] = {6, 7, 8, 9, 10, 11, 12, 13};
   sevseg.begin(COMMON_ANODE, numDigits, digitPins, segmentPins);
   ...
</code></pre>

<p>digitPins is an array that stores the arduino pin numbers that the digits are connected to. Order them from left to right.
digitPins is an array that stores the arduino pin numbers that the segments are connected to. Order them from segment a to g , then the decimal place.</p>

<h4>
<a id="user-content-setting-the-number" class="anchor" href="#setting-the-number" aria-hidden="true"><span class="octicon octicon-link"></span></a>Setting the Number</h4>

<pre><code> sevseg.setNumber(3141,3); // Displays '3.141'
</code></pre>

<p>The first argument is the number to display. The second argument indicates where the decimal place should be, counted from the least significant digit. E.g. to display an integer, the second argument is 0.<br>
Floats are supported. In this case, the second argument indicated how many decimal places of precision you want to display. E.g:</p>

<pre><code> sevseg.setNumber(3.141f,3); //Displays '3.141'
</code></pre>

<p>Out of range numbers show up as ------.</p>

<h4>
<a id="user-content-displaying-the-number" class="anchor" href="#displaying-the-number" aria-hidden="true"><span class="octicon octicon-link"></span></a>Displaying the Number</h4>

<pre><code> sevseg.refreshDisplay();
</code></pre>

<p>Your program must run the refreshDisplay() function repeatedly to display the number.</p>

<h4>
<a id="user-content-set-the-brightness" class="anchor" href="#set-the-brightness" aria-hidden="true"><span class="octicon octicon-link"></span></a>Set the Brightness</h4>

<pre><code> sevseg.setBrightness(90);
</code></pre>

<p>The brightness can be adjusted using a value between 0 and 100.<br>
Note that a 0 does not correspond to no brightness. If you wish for the display to be any dimmer than 0, run <code>sevseg.refreshDisplay();</code> less frequently.</p>
</article>
  </div>

  </div>
</div>

<a href="#jump-to-line" rel="facebox[.linejump]" data-hotkey="l" style="display:none">Jump to Line</a>
<div id="jump-to-line" style="display:none">
  <form accept-charset="UTF-8" class="js-jump-to-line-form">
    <input class="linejump-input js-jump-to-line-field" type="text" placeholder="Jump to line&hellip;" autofocus>
    <button type="submit" class="button">Go</button>
  </form>
</div>

        </div>

      </div><!-- /.repo-container -->
      <div class="modal-backdrop"></div>
    </div><!-- /.container -->
  </div><!-- /.site -->


    </div><!-- /.wrapper -->

      <div class="container">
  <div class="site-footer" role="contentinfo">
    <ul class="site-footer-links right">
      <li><a href="https://status.github.com/">Status</a></li>
      <li><a href="https://developer.github.com">API</a></li>
      <li><a href="http://training.github.com">Training</a></li>
      <li><a href="http://shop.github.com">Shop</a></li>
      <li><a href="/blog">Blog</a></li>
      <li><a href="/about">About</a></li>

    </ul>

    <a href="/" aria-label="Homepage">
      <span class="mega-octicon octicon-mark-github" title="GitHub"></span>
    </a>

    <ul class="site-footer-links">
      <li>&copy; 2015 <span title="0.03025s from github-fe136-cp1-prd.iad.github.net">GitHub</span>, Inc.</li>
        <li><a href="/site/terms">Terms</a></li>
        <li><a href="/site/privacy">Privacy</a></li>
        <li><a href="/security">Security</a></li>
        <li><a href="/contact">Contact</a></li>
    </ul>
  </div><!-- /.site-footer -->
</div><!-- /.container -->


    <div class="fullscreen-overlay js-fullscreen-overlay" id="fullscreen_overlay">
  <div class="fullscreen-container js-suggester-container">
    <div class="textarea-wrap">
      <textarea name="fullscreen-contents" id="fullscreen-contents" class="fullscreen-contents js-fullscreen-contents" placeholder=""></textarea>
      <div class="suggester-container">
        <div class="suggester fullscreen-suggester js-suggester js-navigation-container"></div>
      </div>
    </div>
  </div>
  <div class="fullscreen-sidebar">
    <a href="#" class="exit-fullscreen js-exit-fullscreen tooltipped tooltipped-w" aria-label="Exit Zen Mode">
      <span class="mega-octicon octicon-screen-normal"></span>
    </a>
    <a href="#" class="theme-switcher js-theme-switcher tooltipped tooltipped-w"
      aria-label="Switch themes">
      <span class="octicon octicon-color-mode"></span>
    </a>
  </div>
</div>



    <div id="ajax-error-message" class="flash flash-error">
      <span class="octicon octicon-alert"></span>
      <a href="#" class="octicon octicon-x flash-close js-ajax-error-dismiss" aria-label="Dismiss error"></a>
      Something went wrong with that request. Please try again.
    </div>


      <script crossorigin="anonymous" src="https://assets-cdn.github.com/assets/frameworks-7e989cd35c6790acb51890a1e7abd63edb596bed83c3b99ac299180550d5b096.js" type="text/javascript"></script>
      <script async="async" crossorigin="anonymous" src="https://assets-cdn.github.com/assets/github-bc67a5e08f8b3d0bd9c93d20051c3afec55dc9c4f596f4a61506e4d7d7d94478.js" type="text/javascript"></script>
      
      
  </body>
</html>

