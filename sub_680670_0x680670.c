// 函数名称: sub_680670
// 虚拟地址: 0x680670
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_680670(void* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t* arg6, int32_t arg7)
{
    // 第一条实际指令: int32_t eax_1 = arg7 - *arg6
    int32_t eax_1 = arg7 - *arg6
    void* esi = arg1
    void* edi = *(esi + 0x1b0)
    int32_t ecx = *(edi + 0x10)
    
    if (eax_1 u> ecx)
        eax_1 = ecx
    
    void* ecx_1 = *(esi + 0x1c4)
    arg1 = nullptr
    (*(ecx_1 + 4))(esi, arg2, arg3, arg4, *(edi + 0xc), &arg1, eax_1)
    int32_t result = (*(*(esi + 0x1cc) + 4))(esi, *(edi + 0xc), arg5 + (*arg6 << 2), arg1)
    *arg6 += arg1
    return result
}
