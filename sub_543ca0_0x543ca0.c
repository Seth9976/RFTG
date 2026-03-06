// 函数名称: sub_543ca0
// 虚拟地址: 0x543ca0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_543ca0(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t ebx
    ebx.b = 0
    int32_t esi = 0
    uint32_t result
    
    while (true)
        result = glGetError()
        
        if (result != 0)
            uint32_t result_1 = result
            int32_t var_30_1 = arg2
            int32_t var_34_1 = arg1
            int32_t edi
            int32_t var_38_1 = edi
            sub_4c5680("%s(%d): %s - glError (0x%x)\n")
            esi += 1
            ebx.b = 1
            
            if (esi s< 5)
                continue
        else if (ebx.b == 0)
            break
        
        result = IsDebuggerPresent()
        
        if (result == 1)
            breakpoint
        
        break
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
