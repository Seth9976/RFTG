// 函数名称: zip_archive_set_tempdir
// 虚拟地址: 0x5bc980
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tzip_archive_set_tempdir(void* arg1, char* arg2)
{
    // 第一条实际指令: char* esi
    char* esi
    
    if (arg2 == 0)
        esi = nullptr
    else
        esi = sub_5a7f6b(arg2)
        
        if (esi == 0)
            zip_error_set(arg1 + 8, 0xe, *__errno())
            return 0xffffffff
    
    __free_base(*(arg1 + 0x50))
    *(arg1 + 0x50) = esi
    return 0
}
