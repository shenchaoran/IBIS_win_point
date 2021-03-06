c
c -------
c comwork  include file  last update 3/15/02 D.Polzin
c -------
c
c this include file holds work space arrays and the longitude
c and latitude vectors.  NOTE: The value of ndim3 should be nlon*nlat times
c the largest 3rd dimension in compar (max of nband,nsoilay,nsnolay,npft).
c The value ndim4 should be the largest of 
c (nband,nsoilay,nsnolay,npft,nlon,nlat).
c
cc      integer ndim2, ndim3, ndim4
      real OCEAN
c
      parameter ( OCEAN=9.e+20 ) ! the value to use for non-land points
cc      parameter ( ndim2 = nlon*nlat, 
cc     >            ndim4 = nlon, !max(nlon,nlat,nband,nsoilay,nsnolay,npft),
cc     >            ndim3 = nlon*nlat*ndim4 )
c
cc      character aname*21       ! use to store short names
c
cc      integer lonindex (npoi), ! i index of nth point in land+sea array (i,j)
cc     >        latindex (npoi)  ! j index of nth point in land+sea array (i,j)
c
cc      real lonscale (nlon),    ! longitude of nth point in degrees east
cc     >     latscale (nlat)     ! latitude of nth point in degrees morth
c
c  Yuan      real work (ndim2)        ! work space big enough for one full grid
c
c  Yuan      real cdummy (ndim3)      ! work space big enough for npft grids
c
cc      common /work1/ lonindex,
cc     >               latindex
c
cc      common /work2/ lonscale,
cc     >               latscale
c
c  Yuan      common /work3/ work
c  Yuan      common /work4/ cdummy
c
