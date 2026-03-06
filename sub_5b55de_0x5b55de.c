// 函数名称: sub_5b55de
// 虚拟地址: 0x5b55de
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5b55de()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t var_218 = 0
    int32_t edi
    int32_t var_228 = edi
    wchar16 buffer[0x106]
    wchar16 (* lpBuffer)[0x106] = &buffer
    uint32_t esi = GetCurrentDirectoryW(0x105, &buffer)
    
    if (esi s> 0x104)
        lpBuffer = __calloc_crt(esi + 1, 2)
        
        if (lpBuffer != 0)
            var_218 = 1
            
            if (esi != 0)
                esi = GetCurrentDirectoryW(esi + 1, lpBuffer)
        else
            *__errno() = 0xc
            esi = 0
    
    int32_t result = 0
    
    if (esi == 0)
        *__errno() = 0xc
    else if ((*lpBuffer)[1] == 0x3a)
        uint32_t eax_7 = zx.d(*lpBuffer)
        
        if (eax_7 u>= 0x61 && eax_7 u<= 0x7a)
            eax_7 -= 0x20
        
        result = eax_7 - 0x40
    
    if (var_218 != 0)
        __free_base(lpBuffer)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
