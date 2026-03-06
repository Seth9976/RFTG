// 函数名称: sub_4d1f80
// 虚拟地址: 0x4d1f80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_4d1f80(char* arg1, void* arg2, void* arg3)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* esi = arg2
    int32_t eax_3 = *(esi + 0x10)
    int32_t edx_1 = eax_3 & 0x80000003
    bool cond:1 = edx_1 == 0
    void* var_34 = esi
    
    if (edx_1 s< 0)
        cond:1 = ((edx_1 - 1) | 0xfffffffc) == 0xffffffff
    
    if (not(cond:1))
        sub_4c5870("syncObject.mSyncedSize % 4 == 0", &data_83f3d3, "NetSync.cpp", 0x2da, 
            "NetSync::HostSendDataBlockDiffs")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t eax_5
    int32_t edx_5
    edx_5:eax_5 = sx.q(eax_3)
    int32_t result = (eax_5 + (edx_5 & 3)) s>> 2
    int32_t edx_7 = 0
    int32_t result_1 = result
    
    if (result s> 0)
        do
            int32_t ecx_1 = *(esi + 0x18)
            result = *(esi + 0x1c)
            int32_t* edi_1 = edx_7 << 2
            int32_t* var_48_1 = edi_1
            
            if (*(ecx_1 + (edx_7 << 2)) != *(edi_1 + result))
                int32_t ebx_2 = edx_7 + 1
                int32_t var_24_1 = ebx_2
                
                if (ebx_2 s< result_1)
                    int32_t* eax_7 = ecx_1 + (ebx_2 << 2)
                    int32_t* ebx_4 = *(esi + 0x1c) - ecx_1
                    int32_t* var_1c_1 = ebx_4
                    
                    while (*eax_7 != *(ebx_4 + eax_7))
                        int32_t ecx_4 = var_24_1 + 1
                        eax_7 = &eax_7[1]
                        var_24_1 = ecx_4
                        
                        if (ecx_4 s>= result_1)
                            break
                        
                        ebx_4 = var_1c_1
                    
                    ebx_2 = var_24_1
                
                *arg1 = 1
                int32_t* eax_9 = *(arg3 + 0x518)
                void* ecx_8 = (ebx_2 - edx_7) * 4
                void* var_44_1 = ecx_8
                
                if (eax_9 != 0)
                    while (true)
                        if (eax_9 == 0)
                            sub_4c5870("iter != NULL", &data_83f3d3, "c:\ax2010\engine\xList.h", 0x1a1, 
                                "XList<struct ClientData>::GetNextIter")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        int32_t* edx_9 = eax_9[4]
                        int32_t** edx_10 = *eax_9
                        int32_t** var_4c_1 = edx_10
                        int32_t var_3c = *(esi + 4)
                        int32_t* var_38_1 = edi_1
                        void* var_2c_1
                        void* eax_11
                        
                        if (ecx_8 s>= 0xfc8)
                            var_2c_1 = 0xfc8
                            eax_11 = 0xfc8
                        else
                            eax_11 = ecx_8
                            var_2c_1 = eax_11
                        
                        void* ebx_6 = *(esi + 0x18) + edi_1
                        void* var_20_1 = ecx_8
                        
                        if (ecx_8 != 0)
                            while (true)
                                void* edi_2 = var_20_1
                                
                                if (var_20_1 s>= eax_11)
                                    edi_2 = eax_11
                                
                                if (edx_10 != 0)
                                    void* esi_1 = data_27e7bb8
                                    uint32_t eax_12 = zx.d(edx_10.w)
                                    
                                    if (eax_12 u< *(esi_1 + 4))
                                        void* eax_14 = eax_12 * 0x4c + *esi_1
                                        
                                        if (*(eax_14 + 0x48) == edx_10)
                                            if (edi_2 + 8 s> 0xfd0)
                                                sub_4c5870("length <= MAX_NET_MESSAGE_SIZE", 
                                                    &data_83f3d3, "Network.cpp", 0x29f, 
                                                    "NetBufferStartMessage")
                                                
                                                if (IsDebuggerPresent() == 1)
                                                    breakpoint
                                                
                                                sub_4c5a30()
                                                noreturn
                                            
                                            void* var_14_1 = edi_2 + 8
                                            int32_t var_18
                                            int32_t* var_5c_1 = &var_18
                                            void* var_60_1 = eax_14 + 0x3c
                                            int32_t var_10_1 = 0x7d2
                                            var_18 = 0xfeedface
                                            void* ecx_10
                                            int32_t** edx_11
                                            ecx_10, edx_11 = sub_4c72b0(0xc, edx_10, edi_2 + 8)
                                            int32_t* var_64_1 = &var_3c
                                            void* var_68_1 = eax_14 + 0x3c
                                            void* ecx_11
                                            int32_t** edx_12
                                            ecx_11, edx_12 = sub_4c72b0(8, edx_11, ecx_10)
                                            void* var_6c_1 = ebx_6
                                            void* var_70_1 = eax_14 + 0x3c
                                            sub_4c72b0(edi_2, edx_12, ecx_11)
                                            ecx_8 = var_44_1
                                            edx_10 = var_4c_1
                                    
                                    esi = var_34
                                
                                var_38_1 += edi_2
                                ebx_6 += edi_2
                                void* temp2_1 = var_20_1
                                var_20_1 -= edi_2
                                
                                if (temp2_1 == edi_2)
                                    break
                                
                                eax_11 = var_2c_1
                            
                            edi_1 = var_48_1
                        
                        *(arg3 + 0x528) += 1
                        *(arg3 + 0x52c) += *(esi + 0x10) + 8
                        
                        if (edx_9 == 0)
                            ebx_2 = var_24_1
                            break
                        
                        eax_9 = edx_9
                
                result = sub_5ab990(*(esi + 0x1c) + edi_1, *(esi + 0x18) + edi_1, ecx_8)
                edx_7 = ebx_2 - 1
            
            edx_7 += 1
        while (edx_7 s< result_1)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
