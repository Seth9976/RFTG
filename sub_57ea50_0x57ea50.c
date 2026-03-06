// 函数名称: sub_57ea50
// 虚拟地址: 0x57ea50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_57ea50(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: struct IMalloc ppMalloc
    struct IMalloc ppMalloc
    
    if (SHGetMalloc(&ppMalloc) s>= 0)
        struct BROWSEINFOA lpbi
        __builtin_memset(&lpbi, 0, 0x20)
        lpbi.pszDisplayName = 0
        lpbi.hwndOwner = arg1
        lpbi.lpszTitle = &data_83f3d3
        lpbi.pidlRoot = sub_57e950()
        lpbi.ulFlags = 5
        lpbi.lpfn = sub_57e9f0
        lpbi.lParam = arg2
        struct ITEMIDLIST* pidl = SHBrowseForFolderA(&lpbi)
        
        if (pidl == 0)
            sub_5abfc0(&data_3160b98, 0, 0x104)
        else
            SHGetPathFromIDListA(pidl, &data_3160b98)
        
        struct IMalloc ppMalloc_1 = ppMalloc
        (*(*ppMalloc_1 + 0x14))(ppMalloc_1, pidl)
        struct IMalloc ppMalloc_2 = ppMalloc
        (*(*ppMalloc_2 + 8))(ppMalloc_2)
    
    return &data_3160b98
}
