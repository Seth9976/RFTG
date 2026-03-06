// 函数名称: sub_601b80
// 虚拟地址: 0x601b80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_t __convention("regparm")sub_601b80(HIMC arg1, int32_t arg2, enum IME_COMPOSITION_STRING arg3, uint32_t arg4)
{
    // 第一条实际指令: int32_t eax_1 = ImmGetCompositionStringW(arg1, arg3, arg4 + 0x38, 0x3e)
    int32_t eax_1 = ImmGetCompositionStringW(arg1, arg3, arg4 + 0x38, 0x3e)
    
    if (eax_1 s< 0)
        eax_1 = 0
    
    uint32_t esi = eax_1 u>> 1
    uint32_t result = zx.d(ImmGetCompositionStringW(arg1, GCS_CURSORPOS, nullptr, 0))
    *(arg4 + 0x98) = result
    
    if (result u>= 0x20)
        *(arg4 + (esi << 1) + 0x38) = 0
        return result
    
    if (*(arg4 + (result << 1) + 0x38) != 0x3000)
        *(arg4 + (esi << 1) + 0x38) = 0
        return result
    
    if (result + 1 s< esi)
        __builtin_memcpy(arg4 + ((result + 1) << 1) + 0x36, arg4 + ((result + 1) << 1) + 0x38, 
            (esi - (result + 1)) << 1)
    
    *(arg4 + (esi << 1) + 0x36) = 0
    return 0
}
