// 函数名称: sub_4c89f0
// 虚拟地址: 0x4c89f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_4c89f0(int32_t* arg1 @ esi)
{
    // 第一条实际指令: void* result = arg1[1]
    void* result = arg1[1]
    arg1[0x3fd].b = 1
    
    if (result s< 0x7d0 || result s< 0xbb8)
        result = (*(*data_27e7fd0 + 0x44))(arg1)
    else if (result s< 0xfa0)
        if (result != 0xbb8)
            sub_4c5870("Halt", &data_83f3d3, "Voip.cpp", 0x815, "VoipProcessMessage")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        result = sub_4d2cf0(arg1)
    else if (result s< 0x1388)
        if (result s> 0xfa1)
            if (result != 0xfa2)
            label_4c8a8b:
                void* result_1 = result
                sub_4c5680("unknown http message type %d")
                sub_4c5870("Halt", &data_83f3d3, "Network.cpp", 0x5ac, "HTTPProcessMessage")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
        else if (result != 0xfa1 && result != 0x3ec && result != 0xfa0)
            goto label_4c8a8b
        
        result = (*(*data_27e7fd0 + 0x44))(arg1)
    else if (result s< 0xf4628)
        result = (*(*data_27e7fd0 + 0x44))(arg1)
    
    if (arg1[0x3fd].b == 0)
        return result
    
    int32_t* var_8 = arg1
    sub_4c4590(&data_83f3d3)
    return sub_518190(data_27e7bb8 + 0x50, &var_8)
}
