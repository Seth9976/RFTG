// 函数名称: sub_4c4690
// 虚拟地址: 0x4c4690
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __stdcallsub_4c4690(int32_t* arg1 @ esi, int128_t* arg2)
{
    // 第一条实际指令: void* entry_ebx
    void* entry_ebx
    
    if (entry_ebx == 0)
        return 
    
    char* eax_1 = *arg1
    void* edi_1
    
    if (eax_1 == 0 || *eax_1 == 0)
        int32_t* var_c_1 = arg1
        void** edx
        sub_4c40c0(entry_ebx, edx)
        edi_1 = nullptr
    else
        edi_1 = *(sub_4c4060(arg1) + 8)
        void* eax_5 = *arg1
        void** edx_1 = eax_5 + edi_1
        
        if (edx_1 u>= arg2 && arg2 + entry_ebx u>= eax_5)
            sub_4c5870("mMagicDataPtr + originalLength < str || str + length < mMagicDataPtr", 
                &data_83f3d3, "xString.cpp", 0x118, "XString::AppendLength")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        void** eax_7 = edi_1 + entry_ebx
        sub_4c4160(eax_7, edx_1, arg1, eax_7, 1)
    
    sub_5ab990(*arg1 + edi_1, arg2, entry_ebx)
    *(*arg1 + edi_1 + entry_ebx) = 0
}
