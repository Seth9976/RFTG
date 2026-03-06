// 函数名称: sub_4c6490
// 虚拟地址: 0x4c6490
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_4c6490(int32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: if (arg2[1] s> arg1)
    if (arg2[1] s> arg1)
        sub_4c5870("buffer.dataLength <= size", &data_83f3d3, "Network.cpp", 0x2a, 
            "ResizableBufferSetAllocatedLength")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t* eax_1 = arg2[2]
    
    if (arg1 != eax_1)
        if (eax_1 == 0)
            if (*arg2 == eax_1)
                int32_t* eax_3 = sub_4f43d0()
                *arg2 = eax_3
                arg2[2] = arg1
                return eax_3
            
            sub_4c5870("buffer.dataPtr == NULL", &data_83f3d3, "Network.cpp", 0x33, 
                "ResizableBufferSetAllocatedLength")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (*arg2 == 0)
            sub_4c5870("buffer.dataPtr != NULL", &data_83f3d3, "Network.cpp", 0x39, 
                "ResizableBufferSetAllocatedLength")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t* eax_5 = sub_4f43d0()
        void* ecx_1 = arg2[1]
        
        if (ecx_1 s> 0)
            sub_5ab990(eax_5, *arg2, ecx_1)
        
        int32_t esi_1 = arg2[2]
        sub_4f4430(*arg2, sub_4f4380(esi_1), esi_1)
        eax_1 = arg2
        *eax_1 = eax_5
        eax_1[2] = arg1
    
    return eax_1
}
