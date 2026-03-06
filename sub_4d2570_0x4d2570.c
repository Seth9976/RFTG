// 函数名称: sub_4d2570
// 虚拟地址: 0x4d2570
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t* __fastcallsub_4d2570(int32_t* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int128_t* result = *arg1
    
    if (result != 1)
        if (result != 5)
            sub_4c5870("mNetSyncState == NETSYNCSTATE_CLIENT_CONNECTED", &data_83f3d3, "NetSync.cpp", 
                0x346, "NetSync::ClientSendUpdates")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t i = 0
        char var_15 = 0
        
        if (arg1[0x142] s> 0)
            void* ebx_1 = &arg1[2]
            int32_t** edx
            
            do
                if (*ebx_1 == 1)
                    if (*(ebx_1 + 0x14) != 0)
                        sub_4c5870("syncObject.mDataArray == NULL", &data_83f3d3, "NetSync.cpp", 0x34f, 
                            "NetSync::ClientSendUpdates")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    result, edx = sub_4d2210(&var_15, arg1)
                
                i += 1
                ebx_1 += 0x28
            while (i s< arg1[0x142])
            
            if (var_15 != 0)
                int32_t esi_1 = arg1[1]
                
                if (esi_1 != 0)
                    void* ecx_1 = data_27e7bb8
                    result = zx.d(esi_1.w)
                    
                    if (result u< *(ecx_1 + 4))
                        result = result * 0x4c + *ecx_1
                        
                        if (*(result + 0x48) == esi_1)
                            int32_t var_14
                            int32_t* var_28_2 = &var_14
                            void* var_2c_1 = result + 0x3c
                            int32_t var_10_1 = 0
                            int32_t var_c_1 = 0x7d3
                            var_14 = 0xfeedface
                            result = sub_4c72b0(0xc, edx, ecx_1)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
