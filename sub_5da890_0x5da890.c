// 函数名称: sub_5da890
// 虚拟地址: 0x5da890
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5da890(void* arg1 @ esi, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t edx
    int32_t edx
    int32_t eax_1 = sub_5da6e0(arg3, edx, arg1, arg2, arg3)
    
    if (eax_1 s< 0)
        return 0xffffffff
    
    *(arg1 + 8) -= 1
    int32_t ecx_2 = *(arg1 + 0x10)
    int32_t edi = *(ecx_2 + (eax_1 << 2))
    *(ecx_2 + (eax_1 << 2)) = *(ecx_2 + (*(arg1 + 8) << 2))
    *(*(arg1 + 0x10) + (*(arg1 + 8) << 2)) = edi
    return 0
}
