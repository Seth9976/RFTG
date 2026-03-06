// 函数名称: sub_53c540
// 虚拟地址: 0x53c540
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

LRESULTsub_53c540()
{
    // 第一条实际指令: LRESULT result = SendMessageA(GetDlgItem(data_3078830, 0x76), 0x188, 0, 0)
    LRESULT result = SendMessageA(GetDlgItem(data_3078830, 0x76), 0x188, 0, 0)
    
    if (result == 0xffffffff)
        return result
    
    int32_t* eax_1 = data_3079208
    void* const ebx
    
    if (eax_1 == 0 || eax_1[1] != 0x19)
        ebx = nullptr
    else
        ebx = sub_466320(eax_1)
    
    int32_t var_10_2 = 0
    int32_t* eax_4
    int32_t ecx
    eax_4, ecx = sub_4fff30(data_30d7434, 0)
    sub_505290(ebx, eax_4, ecx, result)
    
    if (result u> 0xff)
        sub_4c5870("emitterIndex >= 0 && emitterIndex < MAX_EMITTERS", &data_83f3d3, 
            "Windows\EditorWindow.cpp", 0x94d, "ToolDataDeleteItem")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    if (0xff - result s> 0)
        sub_5a6c10((result << 3) + &data_3078874, (result << 3) + &data_307887c, (0xff - result) << 3)
    
    int32_t ecx_2 = *(ebx + 4)
    WPARAM eax_8 = 0xffffffff
    
    if (result == ecx_2 && ecx_2 s> 0)
        eax_8 = result - 1
    
    char* ecx_3 = data_3079208
    
    if (ecx_3 != 0)
        ecx_3 = *(ecx_3 + 4)
        
        if (ecx_3 == 0x19)
            int32_t var_10_4 = 0xffffffff
            ecx_3 = sub_538a80(eax_8)
        else if (ecx_3 == 0x1b)
            ecx_3 = sub_539d30(eax_8)
    
    data_3078834 = 0
    sub_536c00(ecx_3)
    sub_56e600()
    return sub_56e480() __tailcall
}
