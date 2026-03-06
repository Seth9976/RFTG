// 函数名称: sub_4c7200
// 虚拟地址: 0x4c7200
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_4c7200(int32_t** arg1, int32_t arg2, void* arg3)
{
    // 第一条实际指令: void* var_8 = arg3
    void* var_8 = arg3
    
    if (arg3 s> 0xfde8)
        sub_4c5870("roomNeeded <= NETWORK_BUFFER_SIZE", &data_83f3d3, "Network.cpp", 0x22c, 
            "NetBufferMakeRoom")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (arg1[2] != 0)
        int32_t** eax_1 = arg1[1]
        
        if (eax_1 == 0)
            sub_4c5870("mpTail != NULL", &data_83f3d3, "c:\ax2010\engine\xList.h", 0x5a, 
                "XList<struct NetBuffer *>::GetTail")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t* result = *eax_1
        
        if (0xfde8 - result[0x3f7b] - result[0x3f7a] s>= arg3)
            return result
    
    var_8 = sub_4c6760()
    return sub_518190(arg1, &var_8)
}
