// 函数名称: sub_565f70
// 虚拟地址: 0x565f70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_565f70(char* arg1, int32_t** arg2, int32_t* arg3)
{
    // 第一条实际指令: char* edi = arg1
    char* edi = arg1
    uint32_t eax
    eax.b = *edi
    float var_c
    int32_t edx
    
    if (eax.b == 0x2d)
        int32_t* i = *arg3
        
        while (i != 0)
            void** i_1 = i
            
            if (i == 0)
                sub_4c5870("iter != NULL", &data_83f3d3, "c:\ax2010\engine\xList.h", 0x1a1, 
                    "XList<struct XAsset *>::GetNextIter")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            float eax_2 = *i
            i = i[1]
            var_c = eax_2
            char eax_3
            eax_3, edx = sub_5640b0(eax_2, edx, &edi[1], eax_2)
            
            if (eax_3 != 0)
                edx = sub_4e7520(arg3, sub_518190(arg2, &var_c), i_1)
                edi = arg1
    else
        int32_t* var_10
        
        if (eax.b != 0x21)
            void** esi_2 = *arg2
            
            if (esi_2 != 0)
                while (true)
                    void** ebx_2 = esi_2
                    
                    if (esi_2 == 0)
                        break
                    
                    int32_t* edi_4 = *esi_2
                    esi_2 = esi_2[1]
                    var_10 = edi_4
                    eax, edx = sub_5640b0(eax, edx, arg1, edi_4)
                    
                    if (eax.b != 0)
                        char eax_11
                        int32_t edx_5
                        eax_11, edx_5 = sub_565ea0(edi_4)
                        
                        if (eax_11 == 0)
                            edx_5 = sub_518190(arg3, &var_10)
                        
                        eax, edx = sub_4e7520(arg2, edx_5, ebx_2)
                    
                    if (esi_2 == 0)
                        return 
                
                sub_4c5870("iter != NULL", &data_83f3d3, "c:\ax2010\engine\xList.h", 0x1a1, 
                    "XList<struct XAsset *>::GetNextIter")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
        else
            void* var_2c_3 = &edi[1]
            char* eax_6 = sub_5a710b()
            
            if (eax_6 s> 0)
                void** esi_1 = *arg3
                
                if (esi_1 != 0)
                    while (true)
                        void** ebx_1 = esi_1
                        
                        if (esi_1 == 0)
                            break
                        
                        int32_t* eax_7 = *esi_1
                        bool cond:0_1 = eax_7[1] != 3
                        esi_1 = esi_1[1]
                        var_10 = eax_7
                        
                        if (not(cond:0_1))
                            float eax_8
                            float edx_3
                            eax_8, edx_3 = sub_418560(eax_7)
                            var_c = fconvert.s(float.t(eax_6))
                            long double x87_r7_2 = fconvert.t(eax_8)
                            long double x87_r6_1 = fconvert.t(var_c)
                            x87_r6_1 - x87_r7_2
                            eax_8.w = (x87_r6_1 < x87_r7_2 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r6_1, x87_r7_2) ? 1 : 0) << 0xa
                                | (x87_r6_1 == x87_r7_2 ? 1 : 0) << 0xe | 0x3000
                            bool p_1 = unimplemented  {test ah, 0x5}
                            
                            if (p_1)
                                long double x87_r6_2 = fconvert.t(edx_3)
                                x87_r6_2 - x87_r7_2
                                eax_8.w = (x87_r6_2 < x87_r7_2 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r6_2, x87_r7_2) ? 1 : 0) << 0xa
                                    | (x87_r6_2 == x87_r7_2 ? 1 : 0) << 0xe
                            
                            if (not(p_1) || (eax_8:1.b & 0x41) == 0)
                                sub_4e7520(arg3, sub_518190(arg2, &var_10), ebx_1)
                        
                        if (esi_1 == 0)
                            return 
                    
                    sub_4c5870("iter != NULL", &data_83f3d3, "c:\ax2010\engine\xList.h", 0x1a1, 
                        "XList<struct XAsset *>::GetNextIter")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
}
