// 函数名称: sub_4ce460
// 虚拟地址: 0x4ce460
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char**sub_4ce460(char* arg1 @ esi, int32_t arg2)
{
    // 第一条实际指令: int32_t* entry_ebx
    int32_t* entry_ebx
    char** eax = *entry_ebx
    char** var_8 = eax
    
    if (eax != 0)
        int32_t var_14_1 = arg2
        void* ecx
        char eax_2 = sub_4ce400(arg2, &var_8, ecx, ecx)
        
        if (eax_2 == 0)
            return eax_2
        
        char* edi_1 = var_8
        
        if (arg1 == 0 && *edi_1 == 0)
            *entry_ebx = 0
            int32_t eax_3
            eax_3.b = 1
            return 1
        
        char* eax_4 = arg1
        
        if (arg1 == 0)
            eax_4 = sub_508bc0(edi_1)
        
        *entry_ebx = sub_509140(eax_4, edi_1)
    
    eax.b = 1
    return eax
}
