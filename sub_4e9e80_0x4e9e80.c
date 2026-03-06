// 函数名称: sub_4e9e80
// 虚拟地址: 0x4e9e80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_4e9e80(int32_t arg1, int32_t arg2, int32_t* arg3, void* arg4, int32_t* arg5, int32_t arg6)
{
    // 第一条实际指令: arg3[1] = arg1
    arg3[1] = arg1
    int128_t* var_8
    int128_t* ecx
    
    if (arg1 != 0)
        int128_t* eax = sub_4cce80(arg1)
        sub_5abfc0(eax, 0, arg1)
        var_8 = eax
        ecx = eax
    else
        ecx = nullptr
        var_8 = nullptr
    
    *arg3 = ecx
    arg3[2] = 4
    int32_t* result = arg5[1]
    int32_t i = 0
    int32_t ebx_4 = arg1 s/ 6
    int32_t esi_1 = 0
    int32_t var_10 = 0
    
    if (result s>= 0xffff)
        sub_4c5870("pMayaVertex->mFrameCount < MAXUINT16", &data_83f3d3, "Flanim.cpp", 0x5ca, 
            "FlanimCompressConstantInt")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t i_1 = 0
    
    if (result s> 0)
        int32_t var_c_1 = 0
        
        do
            void* eax_5 = *arg5 + var_c_1
            int32_t eax_6
            
            if (arg6 == 4)
                eax_6 = *(eax_5 + 0x20)
            else if (arg6 == 5)
                eax_6 = *(eax_5 + 0x24)
            else if (arg6 != 6)
                if (arg6 != 7)
                    sub_4c5870("Halt", &data_83f3d3, "Flanim.cpp", 0x55b, "FlanimCompressGetInt")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                eax_6 = *(eax_5 + 0x2c)
            else
                eax_6 = sub_4e99c0(arg4, *(eax_5 + 0x28))
                ecx = var_8
                i = i_1
            
            if (i == 0 || var_10 != eax_6)
                *(ecx + (ebx_4 << 2) + (esi_1 << 1)) = i.w
                *(ecx + (esi_1 << 2)) = eax_6
                var_10 = eax_6
                esi_1 += 1
            
            result = arg5
            var_c_1 += 0x30
            i += 1
            i_1 = i
        while (i s< result[1])
    
    if (esi_1 == ebx_4)
        return result
    
    sub_4c5870("dataIndex == numValues", &data_83f3d3, "Flanim.cpp", 0x5d9, "FlanimCompressConstantInt")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
