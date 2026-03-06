// 函数名称: sub_5c4500
// 虚拟地址: 0x5c4500
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_5c4500(int32_t* arg1, void* arg2 @ esi, int32_t* arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t eax_2
    int32_t eax_2
    int32_t edx_2
    eax_2, edx_2 = zip_source_seek_compute_offset(*(arg2 + 0x28), *(arg2 + 0x2c), *(arg2 + 0x20), 
        *(arg2 + 0x24), arg3, arg4, arg5, arg1)
    
    if (edx_2 s<= 0 && (edx_2 s< 0 || eax_2 u< 0))
        return 0xffffffff
    
    *(arg2 + 0x28) = eax_2
    *(arg2 + 0x2c) = edx_2
    return 0
}
