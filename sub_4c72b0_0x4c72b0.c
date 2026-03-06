// 函数名称: sub_4c72b0
// 虚拟地址: 0x4c72b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t* __convention("regparm")sub_4c72b0(void* arg1, int32_t** arg2, void* arg3)
{
    // 第一条实际指令: void* ebx = arg1
    void* ebx = arg1
    
    if (ebx s<= 0)
        sub_4c5870("length > 0", &data_83f3d3, "Network.cpp", 0x23f, "NetBufferListAppendData")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t edx
    sub_4c7200(arg2, edx, 1)
    int32_t* eax_2 = arg2[1]
    void* edx_1 = arg3
    void* var_8 = edx_1
    
    if (eax_2 != 0)
        while (true)
            void* edi_1 = *eax_2
            int32_t ecx_1 = *(edi_1 + 0xfde8)
            void* eax_3 = *(edi_1 + 0xfdec)
            void* esi_2 = 0xfde8 - ecx_1 - eax_3
            void* eax_5 = eax_3 + ecx_1 + edi_1
            
            if (esi_2 s>= ebx)
                int128_t* result = sub_5ab990(eax_5, edx_1, ebx)
                *(edi_1 + 0xfdec) += ebx
                return result
            
            if (esi_2 s> 0)
                sub_5ab990(eax_5, edx_1, esi_2)
                *(edi_1 + 0xfdec) += esi_2
                var_8 += esi_2
                ebx -= esi_2
            
            void* eax_6 = data_27e7bb8
            
            if (eax_6 == 0)
                sub_4c5870("gNetwork", &data_83f3d3, "Network.cpp", 0xfa, "NetBufferAlloc")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            void* eax_8
            
            if (*(eax_6 + 0x4c) == 0)
                eax_8 = __execvp(0xfe10, 0x10)
                
                if (eax_8 == 0)
                    sub_4c5870("pBuffer", &data_83f3d3, "xMemory.cpp", 0x4f, "XMalloc")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
            else
                eax_8 = sub_4c9050(eax_6 + 0x44)
            
            *(eax_8 + 0xfdf8) = fconvert.s(float.t(0))
            *(eax_8 + 0xfde8) = 0
            *(eax_8 + 0xfdec) = 0
            *(eax_8 + 0xfdf0) = 0
            *(eax_8 + 0xfdf4) = 0
            void* var_c = eax_8
            sub_518190(arg2, &var_c)
            eax_2 = arg2[1]
            
            if (eax_2 == 0)
                break
            
            edx_1 = var_8
    
    sub_4c5870("mpTail != NULL", &data_83f3d3, "c:\ax2010\engine\xList.h", 0x5a, 
        "XList<struct NetBuffer *>::GetTail")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
