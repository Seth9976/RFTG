// 函数名称: sub_4c7a00
// 虚拟地址: 0x4c7a00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t* __convention("regparm")sub_4c7a00(void* arg1, void** arg2, int128_t* arg3, char arg4)
{
    // 第一条实际指令: void** ebx = *(arg1 + 0x30)
    void** ebx = *(arg1 + 0x30)
    int128_t* var_8 = arg3
    void** edi = arg2
    
    if (ebx != 0)
        while (true)
            void** var_c = ebx
            
            if (ebx == 0)
                sub_4c5870("iter != NULL", &data_83f3d3, "c:\ax2010\engine\xList.h", 0x1a1, 
                    "XList<struct NetBuffer *>::GetNextIter")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            void** esi_1 = *ebx
            void* eax_2 = esi_1[0x3f7b]
            ebx = ebx[1]
            void** var_14
            
            if (eax_2 s>= edi)
                int128_t* eax_8
                int32_t edx_3
                eax_8, edx_3 = sub_5ab990(arg3, esi_1[0x3f7a] + esi_1, edi)
                
                if (arg4 == 0)
                    return eax_8
                
                int32_t eax_9 = esi_1[0x3f7b]
                
                if (eax_9 != edi)
                    esi_1[0x3f7a] += edi
                    void* eax_11 = eax_9 - edi
                    esi_1[0x3f7b] = eax_11
                    return eax_11
                
                sub_4e7520(arg1 + 0x30, edx_3, var_c)
                int32_t** edi_4 = data_27e7bb8 + 0x44
                var_14 = esi_1
                return sub_518190(edi_4, &var_14)
            
            if (eax_2 s<= 0)
                sub_4c5870("netBuffer->mDataSize > 0", &data_83f3d3, "Network.cpp", 0x3ab, 
                    "NetBufferGetReceiveData")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t edx = sub_5ab990(arg3, esi_1[0x3f7a] + esi_1, eax_2)
            int32_t eax_5 = esi_1[0x3f7b]
            var_8 += eax_5
            edi -= eax_5
            var_14 = edi
            
            if (arg4 != 0)
                sub_4e7520(arg1 + 0x30, edx, var_c)
                int32_t** edi_2 = data_27e7bb8 + 0x44
                var_c = esi_1
                sub_518190(edi_2, &var_c)
                edi = var_14
            
            if (ebx == 0)
                break
            
            arg3 = var_8
    
    sub_4c5870("Halt", &data_83f3d3, "Network.cpp", 0x3b9, "NetBufferGetReceiveData")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
