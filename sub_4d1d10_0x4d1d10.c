// 函数名称: sub_4d1d10
// 虚拟地址: 0x4d1d10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __stdcallsub_4d1d10(int32_t** arg1, void* arg2, char* arg3)
{
    // 第一条实际指令: void* ecx = arg2
    void* ecx = arg2
    void* result = *(ecx + 0x14)
    int32_t edx = 0
    int32_t var_8 = 0
    
    if (*(result + 4) s<= 0)
        return result
    
    BOOL eax_16
    
    while (true)
        if (edx s< 0 || edx s>= *(result + 8))
            sub_4c5870("index >= 0 && index < (int)syncObject.mDataArray->mMaxSize", &data_83f3d3, 
                "NetSync.cpp", 0xec, "GetItemInDataArray")
            eax_16 = IsDebuggerPresent()
            break
        
        int32_t* ebx_3 = *(ecx + 8) * edx + *result
        int32_t* eax = *(ecx + 0x10)
        int32_t edi_2 = *(ebx_3 + *(ecx + 0xc))
        int32_t* esi_3 = &eax[1] * edx + *(ecx + 0x1c)
        int32_t* var_14_1 = esi_3
        
        if (edi_2 == *(eax + esi_3))
            void* edx_3 = eax & 0x80000003
            bool cond:0_1 = edx_3 != 0
            
            if (edx_3 s< 0)
                cond:0_1 = ((edx_3 - 1) | 0xfffffffc) != 0xffffffff
            
            if (cond:0_1)
                sub_4c5870("syncObject.mSyncedSize % 4 == 0", &data_83f3d3, "NetSync.cpp", 0x278, 
                    "NetSync::HostSendDataArrayDiffs")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t eax_4
            int32_t edx_7
            edx_7:eax_4 = sx.q(eax)
            int32_t eax_6 = (eax_4 + (edx_7 & 3)) s>> 2
            int32_t edi_4 = 0
            
            if (eax_6 s> 0)
                do
                    int32_t* eax_7 = edi_4 << 2
                    
                    if (*(eax_7 + ebx_3) != *(eax_7 + esi_3))
                        int32_t edx_10 = edi_4 + 1
                        int32_t var_c_1 = edx_10
                        
                        if (edx_10 s< eax_6)
                            void* ecx_2 = &ebx_3[edx_10]
                            
                            while (*ecx_2 != *(esi_3 - ebx_3 + ecx_2))
                                edx_10 += 1
                                ecx_2 += 4
                                
                                if (edx_10 s>= eax_6)
                                    break
                            
                            var_c_1 = edx_10
                        
                        *arg3 = 1
                        void* ecx_5 = edx_10 - edi_4
                        int32_t* edi_5 = arg1[0x146]
                        void* var_18_1 = ecx_5
                        
                        if (edi_5 != 0)
                            while (true)
                                if (edi_5 == 0)
                                    sub_4c5870("iter != NULL", &data_83f3d3, 
                                        "c:\ax2010\engine\xList.h", 0x1a1, 
                                        "XList<struct ClientData>::GetNextIter")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                                
                                int32_t* eax_10 = edi_5
                                edi_5 = edi_5[4]
                                sub_4d0c20(*eax_10, arg1, arg2, var_8, eax_7, ecx_5 * 4)
                                
                                if (edi_5 == 0)
                                    edx_10 = var_c_1
                                    break
                                
                                ecx_5 = var_18_1
                        
                        esi_3 = var_14_1
                        ecx = arg2
                        edi_4 = edx_10 - 1
                    
                    edi_4 += 1
                while (edi_4 s< eax_6)
            
        label_4d1e78:
            
            if (*arg3 != 0)
                goto label_4d1e83
        else
            *arg3 = 1
            int32_t* edi_3 = arg1[0x146]
            
            if (edi_3 != 0)
                while (true)
                    if (edi_3 == 0)
                        sub_4c5870("iter != NULL", &data_83f3d3, "c:\ax2010\engine\xList.h", 0x1a1, 
                            "XList<struct ClientData>::GetNextIter")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t* eax_3 = edi_3
                    edi_3 = edi_3[4]
                    sub_4d0d20(*eax_3, arg1, ecx, edx)
                    ecx = arg2
                    
                    if (edi_3 == 0)
                        esi_3 = var_14_1
                        break
                    
                    edx = var_8
                
                goto label_4d1e78
            
        label_4d1e83:
            sub_5ab990(esi_3, ebx_3, *(ecx + 0x10))
            ecx = arg2
            *(esi_3 + *(ecx + 0x10)) = edi_2
        
        result = *(ecx + 0x14)
        int32_t edx_16 = var_8 + 1
        var_8 = edx_16
        
        if (edx_16 s>= *(result + 4))
            return result
        
        edx = var_8
        continue
    
    if (eax_16 == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
