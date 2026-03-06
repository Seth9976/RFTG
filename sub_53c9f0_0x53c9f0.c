// 函数名称: sub_53c9f0
// 虚拟地址: 0x53c9f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char**sub_53c9f0()
{
    // 第一条实际指令: LRESULT eax = sub_536e40()
    LRESULT eax = sub_536e40()
    void* eax_1
    int32_t edx
    eax_1, edx = sub_5370b0()
    char** result = sub_53bc60(eax_1, edx, eax_1, eax)
    
    if (result == 0)
        return result
    
    int32_t* eax_2
    int32_t ecx_1
    void* edx_1
    eax_2, ecx_1, edx_1 = sub_536db0()
    
    if (eax_2 == 0)
        sub_4c5870("pEmitter", &data_83f3d3, "Windows\EditorWindow.cpp", 0xa6d, "EditorPickAsset")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    char** result_1 = result
    LRESULT var_14_1 = eax
    char* ecx_2 = sub_530b60(eax_2, edx_1, ecx_1, &data_8c35ec)
    void* eax_4 = data_3079208
    
    if (eax_4 != 0)
        int32_t eax_5 = *(eax_4 + 4)
        
        if (eax_5 == 0x19)
            int32_t var_10_1 = 0xffffffff
            return sub_536c00(sub_538a80(0xffffffff))
        
        if (eax_5 == 0x1b)
            ecx_2 = sub_539d30(0xffffffff)
    
    return sub_536c00(ecx_2)
}
