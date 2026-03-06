// 函数名称: sub_5de440
// 虚拟地址: 0x5de440
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_5de440(void* arg1, char* arg2)
{
    // 第一条实际指令: int32_t __saved_esi = 0x20
    int32_t __saved_esi = 0x20
    char* var_14 = arg2
    void* edi = arg1
    int32_t eax = sub_5cd400()
    
    if (eax != 0 || *arg2 == eax.b || edi == 0)
        return 0
    
    char* var_14_1 = arg2
    void* var_18 = edi
    
    for (void* i = sub_5cd410(); i != 0; i = sub_5cd410())
        void* eax_4 = sub_5cd1b0(arg2) + i
        
        if (i == edi || *(i - 1) == 0x20)
            char ecx_1 = *eax_4
            
            if (ecx_1 == 0x20 || ecx_1 == 0)
                return 1
        
        char* var_14_3 = arg2
        void* var_18_1 = eax_4
        edi = eax_4
    
    return 0
}
