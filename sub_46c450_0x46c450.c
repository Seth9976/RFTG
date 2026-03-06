// 函数名称: sub_46c450
// 虚拟地址: 0x46c450
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_46c450(int32_t* arg1, int32_t arg2, int32_t* arg3, int32_t arg4)
{
    // 第一条实际指令: *arg3 = 0
    *arg3 = 0
    int32_t edi = 0
    
    if (arg4 s<= 0)
        return 
    
    void* edx_2 = arg2 + arg1 * 0x14 + 0x464
    int32_t entry_ebx
    void* var_8_1 = entry_ebx + (arg4 << 2) - 4
    
    do
        int32_t eax_3 =
            *(sub_463f60(*(data_27e7a40 + 0x548) + 0x43960, *(entry_ebx + (edi << 2))) + 0x7c)
        void* eax_5 = *(edx_2 + 8)
        
        if (*(eax_5 + 6) != 1)
        label_46c51c:
            int32_t** ecx_7 = var_8_1
            arg1 = *(entry_ebx + (edi << 2))
            arg4 -= 1
            *(entry_ebx + (edi << 2)) = *ecx_7
            *ecx_7 = arg1
            var_8_1 = ecx_7 - 4
            edi -= 1
        else
            void* esi_2 = *(arg2 + eax_3 * 0x14 + 0x46c)
            
            if (*(esi_2 + 6) != 1 || (*(eax_5 + 0x10) & 1) != 0 || (*(esi_2 + 0x10) & 1) != 0)
                goto label_46c51c
            
            void* ecx_5
            ecx_5.b = *(eax_5 + 0xe)
            void* edx_4
            
            if (ecx_5.b != 1)
                edx_4.b = *(esi_2 + 0xe)
            
            if (ecx_5.b != 1 && edx_4.b != 1 && ecx_5.b != edx_4.b)
                goto label_46c51c
            
            if (ecx_5.b == 0)
                if (ecx_5.b != *(esi_2 + 0xe))
                    goto label_46c51c
            else if (*(esi_2 + 0xe) == 0 && ecx_5.b != *(esi_2 + 0xe))
                goto label_46c51c
            
            ecx_5.b = *(esi_2 + 7)
            eax_5.b = *(eax_5 + 7)
            
            if (ecx_5.b s< eax_5.b || sx.d(ecx_5.b) s> sx.d(eax_5.b) + 3)
                goto label_46c51c
            
            *arg3 += 1
        
        edi += 1
    while (edi s< arg4)
}
