// 函数名称: sub_5c21e0
// 虚拟地址: 0x5c21e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5c21e0(int32_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t eax_1
    int32_t eax_1
    int32_t edx
    eax_1, edx = zip_source_write(*arg1, arg2, arg3, arg4)
    
    if (edx s<= 0 && (edx s< 0 || eax_1 u< 0))
        sub_5bf050(&arg1[2], *arg1)
        return 0xffffffff
    
    if (eax_1 == arg3 && edx == arg4)
        return 0
    
    zip_error_set(&arg1[2], 6, 4)
    return 0xffffffff
}
