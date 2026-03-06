// 函数名称: sub_4c4740
// 虚拟地址: 0x4c4740
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __stdcallsub_4c4740(int32_t* arg1 @ esi, char* arg2 @ edi, char arg3)
{
    // 第一条实际指令: if (arg2 s>= 0)
    if (arg2 s>= 0)
        char* eax_1 = *arg1
        int32_t eax_2
        
        if (eax_1 == 0 || *eax_1 == 0)
            eax_2 = 0
        else
            eax_2 = *(sub_4c4060(arg1) + 8)
        
        if (arg2 s< eax_2)
            if (*(sub_4c4060(arg1) + 4) s> 1)
                char* eax_7 = *arg1
                void** eax_8
                
                if (eax_7 == 0 || *eax_7 == 0)
                    eax_8 = nullptr
                else
                    eax_8 = *(sub_4c4060(arg1) + 8)
                
                void** edx
                sub_4c4160(eax_8, edx, arg1, eax_8, 1)
                char* eax_11 = *arg1
                
                if (eax_11 == 0 || *eax_11 == 0)
                    **arg1 = 0
                    arg2[*arg1] = arg3
                    return arg3
                
                *(*(sub_4c4060(arg1) + 8) + *arg1) = 0
            
            void* eax_6
            eax_6.b = arg3
            arg2[*arg1] = eax_6.b
            return eax_6
    
    sub_4c5870("index >= 0 && index < Length()", &data_83f3d3, "xString.cpp", 0x126, 
        "XString::SetAsciiChar")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
