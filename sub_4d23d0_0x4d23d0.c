// 函数名称: sub_4d23d0
// 虚拟地址: 0x4d23d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_t __fastcallsub_4d23d0(int32_t* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    
    if (*arg1 != 2)
        sub_4c5870("mNetSyncState == NETSYNCSTATE_HOST_RUNNING", &data_83f3d3, "NetSync.cpp", 0x317, 
            "NetSync::HostSendUpdates")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t i = 0
    char var_15 = 0
    
    if (arg1[0x142] s> 0)
        void* esi_1 = &arg1[2]
        
        do
            if (*esi_1 == 0)
                if (*(esi_1 + 0x14) == 0)
                    sub_4d1f80(&var_15, esi_1, arg1)
                else
                    sub_4d1d10(arg1, esi_1, &var_15)
            
            i += 1
            esi_1 += 0x28
        while (i s< arg1[0x142])
    
    uint32_t result = arg1[0x146]
    
    if (result != 0)
        void* ecx_1 = data_27e7bb8
        
        while (true)
            if (result == 0)
                sub_4c5870("iter != NULL", &data_83f3d3, "c:\ax2010\engine\xList.h", 0x1a1, 
                    "XList<struct ClientData>::GetNextIter")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t** result_1 = *(result + 0x10)
            int32_t* result_2 = result
            int32_t esi_2 = *result_2
            
            if (var_15 != 0 && esi_2 != 0)
                result = zx.d(esi_2.w)
                
                if (result u< *(ecx_1 + 4))
                    result = result * 0x4c + *ecx_1
                    
                    if (*(result + 0x48) == esi_2)
                        int32_t var_14
                        int32_t* var_30_3 = &var_14
                        int32_t var_34_2 = result + 0x3c
                        int32_t var_10_1 = 0
                        int32_t var_c_1 = 0x7d3
                        var_14 = 0xfeedface
                        result = sub_4c72b0(0xc, result_1, ecx_1)
                        ecx_1 = data_27e7bb8
            
            if (result_2[3] != 0 && esi_2 != 0)
                result = zx.d(esi_2.w)
                
                if (result u< *(ecx_1 + 4))
                    result = result * 0x4c + *ecx_1
                    
                    if (*(result + 0x48) == esi_2 && result_2[3] != 0)
                        int32_t** edi_1 = result + 0x3c
                        
                        do
                            void* var_20 = sub_4db440(&result_2[1])
                            result = sub_518190(edi_1, &var_20)
                        while (result_2[3] != 0)
                        
                        ecx_1 = data_27e7bb8
            
            if (result_1 == 0)
                break
            
            result = result_1
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
