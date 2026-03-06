// 函数名称: sub_564340
// 虚拟地址: 0x564340
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_564340(int32_t* arg1 @ esi, void* arg2, void* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t* var_38 = nullptr
    int32_t* var_38 = nullptr
    int32_t* i = arg1[3]
    void* var_3c = nullptr
    int32_t* i_2 = nullptr
    void* var_34 = nullptr
    void* var_30 = nullptr
    int32_t var_c = 0
    void* eax
    
    if (i != 0)
        void* var_24
        int32_t* edx_2
        
        do
            int32_t* i_1 = i
            
            if (i == 0)
                sub_4c5870("iter != NULL", &data_83f3d3, "c:\ax2010\engine\xList.h", 0x1a1, 
                    "XList<struct Vec2I>::GetNextIter")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            void* edx_1 = *i
            int32_t* edi_1 = i[1]
            i = i[2]
            eax = arg2 + edx_1
            var_24 = edx_1
            edx_2 = arg1[0x10]
            void* edi_2 = edi_1 + arg3
            
            if (eax s<= edx_2 && edi_2 s<= edx_2)
                int32_t ebx_1 = 0
                int32_t var_14_1 = 0
                
                if (eax s> arg1[9] || edi_2 s> arg1[0xa])
                    ebx_1 = edi_2 * eax
                    var_14_1 = ebx_1
                
                if (i_2 == 0)
                label_5643eb:
                    void* edx_3 = arg1[0x14]
                    void* edi_3 = edx_3 + eax
                    void* edx_4 = edx_3 + edi_2
                    edx_2 = *arg1
                    
                    if (edx_2 == 0)
                    label_564439:
                        i_2 = i_1
                        edx_2 = edi_1
                        var_3c = var_24
                        var_38 = edx_2
                        var_34 = edi_3
                        var_30 = edx_4
                        var_c = ebx_1
                    else
                        while (true)
                            int32_t* eax_3 = edx_2
                            edx_2 = edx_2[4]
                            
                            if (*eax_3 s< edi_3 && eax_3[1] s< edx_4 && eax_3[2] s> var_24
                                    && eax_3[3] s> edi_1)
                                break
                            
                            if (edx_2 == 0)
                                ebx_1 = var_14_1
                                goto label_564439
                else if (var_c s>= ebx_1)
                    if (var_c != ebx_1)
                        goto label_5643eb
                    
                    edx_2 = edi_1
                    
                    if (var_38 s> edx_2)
                        goto label_5643eb
        while (i != 0)
        
        void** i_3 = i_2
        
        if (i_3 != 0)
            sub_567f00(&arg1[3], edx_2, i_3)
            var_24 = var_34
            int32_t* var_20_2 = var_38
            sub_555360(&arg1[3], &var_24)
            var_24 = var_3c
            void* var_20_3 = var_30
            sub_555360(&arg1[3], &var_24)
            sub_567c80(arg1, &var_3c)
            void* edi_6 = var_3c
            void* ecx_5 = arg1[9]
            void* eax_7 = edi_6 + arg2
            
            if (ecx_5 s> eax_7)
                eax_7 = ecx_5
            
            void* ecx_6 = arg1[0xa]
            arg1[9] = eax_7
            void* eax_9 = arg3 + var_38
            
            if (ecx_6 s> eax_9)
                eax_9 = ecx_6
            
            arg1[0xa] = eax_9
            *arg4 = edi_6
            arg4[1] = var_38
            int32_t ecx_8 = arg1[2] & 0x8000003f
            bool cond:1 = ecx_8 != 0
            
            if (ecx_8 s< 0)
                cond:1 = ((ecx_8 - 1) | 0xffffffc0) != 0xffffffff
            
            if (not(cond:1))
                sub_564280(arg1)
            
            int32_t* eax_10
            eax_10.b = 1
            return eax_10
    
    eax.b = 0
    return eax
}
