// 函数名称: sub_5ca380
// 虚拟地址: 0x5ca380
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_5ca380(int32_t arg1, int32_t arg2, int32_t arg3, char* arg4)
{
    // 第一条实际指令: int32_t var_8 = arg3
    int32_t var_8 = arg3
    int32_t ebx
    int32_t var_c = ebx
    int32_t var_10 = 0x20
    char* var_14 = arg4
    int32_t eax = sub_5cd400()
    
    if (eax == 0 && *arg4 != eax.b)
        char* eax_1 = sub_5d2340(arg4)
        
        if (eax_1 == 0 || *eax_1 != 0x30)
            int32_t esi
            int32_t var_10_2 = esi
            int32_t result = sub_5ca2e0("glGetString")
            
            if (result == 0)
                return result
            
            int32_t edi
            int32_t var_14_1 = edi
            int32_t eax_3 = result(0x1f02)
            int32_t eax_4
            
            if (eax_3 != 0)
                int32_t var_14_2 = eax_3
                eax_4 = sub_5cd570()
            
            if (eax_3 == 0 || eax_4 s< 3)
                void* eax_10 = result(0x1f03)
                
                if (eax_10 != 0)
                    char* var_14_6 = arg4
                    void* var_18_2 = eax_10
                    void* edi_3 = eax_10
                    void* esi_5 = sub_5cd410()
                    
                    if (esi_5 != 0)
                        while (true)
                            void* eax_13 = sub_5cd1b0(arg4) + esi_5
                            
                            if (esi_5 == edi_3 || *(esi_5 - 1) == 0x20)
                                char ecx = *eax_13
                                
                                if (ecx == 0x20)
                                    return 1
                                
                                if (ecx == 0)
                                    return 1
                            
                            char* var_14_8 = arg4
                            void* var_18_3 = eax_13
                            edi_3 = eax_13
                            esi_5 = sub_5cd410()
                            
                            if (esi_5 == 0)
                                return 0
            else
                var_8 = 0
                int32_t eax_5 = sub_5ca2e0("glGetStringi")
                int32_t eax_6 = sub_5ca2e0("glGetIntegerv")
                
                if (eax_5 != 0 && eax_6 != 0)
                    eax_6(0x821d, &var_8)
                    int32_t esi_3 = 0
                    
                    if (var_8 s> 0)
                        do
                            if (sub_5cd590(eax_5(0x1f03, esi_3), arg4) == 0)
                                return 1
                            
                            esi_3 += 1
                        while (esi_3 s< var_8)
    
    return 0
}
