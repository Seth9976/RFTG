// 函数名称: sub_4f2850
// 虚拟地址: 0x4f2850
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_4f2850(float* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* eax_3 = data_27e7fcc
    
    if (eax_3 == 0)
        sub_4c5870("gpGameData", &data_83f3d3, "c:\ax2010\engine\Game.h", 0x59, "GetGameData")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* eax_5 = *(eax_3 + 0x30)
    *(eax_5 + 0x20) += 1
    int32_t var_98
    sub_5abfc0(&var_98, 0, 0x88)
    long double x87_r7 = float.t(0)
    float var_64 = fconvert.s(x87_r7)
    float var_60 = fconvert.s(x87_r7)
    long double x87_r7_1 = float.t(1)
    var_98 = 0x3f800000
    float var_5c = fconvert.s(x87_r7_1)
    float var_58 = fconvert.s(x87_r7_1)
    int32_t var_90 = 0x3f800000
    int32_t var_94 = 0x3f800000
    void* result = 0x3f800000
    int32_t var_74 = 0x3f800000
    int32_t var_6c = 0x3f800000
    void* entry_ebx
    bool cond:0 = *(entry_ebx + 0x75) == 0
    int32_t var_70 = 0x3f800000
    int32_t var_68 = 0x3f800000
    void var_30
    __builtin_memcpy(&var_30, entry_ebx + 0x2c, 0x20)
    void var_1c
    
    if (not(cond:0) && *(entry_ebx + 0x74) != 0)
        result = sub_4e2000(&var_1c)
    uint32_t esi_1 = 0
    
    while (true)
        if (esi_1 != 0)
            esi_1 = *(esi_1 + 0x2fc)
        else
            esi_1 = *(entry_ebx + 8)
        
        if (esi_1 == 0)
            break
        
        result = sub_4f2510(esi_1, esi_1, &var_98, arg1)
    
    if (*(entry_ebx + 0x75) != 0 && *(entry_ebx + 0x74) != 0)
        result = sub_4e2080()
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
