// 函数名称: zip_stat
// 虚拟地址: 0x5bde80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tzip_stat(void* arg1, char* arg2, int32_t arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t eax_1
    int32_t eax_1
    int32_t edx
    eax_1, edx = zip_name_locate(arg1, arg2, arg3.b)
    
    if (edx s<= 0 && (edx s< 0 || eax_1 u< 0))
        return 0xffffffff
    
    return zip_stat_index(arg1, eax_1, edx, arg3, arg4)
}
