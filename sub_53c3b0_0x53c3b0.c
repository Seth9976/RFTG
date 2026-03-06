// 函数名称: sub_53c3b0
// 虚拟地址: 0x53c3b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

LRESULTsub_53c3b0()
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    LRESULT result
    int32_t ecx_1
    result, ecx_1 = SendMessageA(GetDlgItem(data_3078830, 0x76), 0x188, 0, 0)
    
    if (result == 0xffffffff)
        return result
    
    int32_t* eax_2 = data_3079208
    int32_t* var_8_1
    
    if (eax_2 == 0 || eax_2[1] != 0x19)
        var_8_1 = nullptr
    else
        int32_t* eax_3
        eax_3, ecx_1 = sub_466320(eax_2)
        var_8_1 = eax_3
    
    int32_t var_1c_1 = ecx_1
    int32_t* eax_5
    int32_t edx_1
    eax_5, edx_1 = sub_4fff30(data_30d7434, 0)
    sub_505030(eax_5, edx_1, var_8_1, eax_5, result + 1)
    
    if (result + 1 u> 0xff)
        sub_4c5870("emitterIndex >= 0 && emitterIndex < MAX_EMITTERS", &data_83f3d3, 
            "Windows\EditorWindow.cpp", 0x941, "ToolDataAddItem")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    if (0xff - (result + 1) s> 0)
        sub_5a6c10(((result + 1) << 3) + &data_307887c, ((result + 1) << 3) + &data_3078874, 
            (0xff - (result + 1)) << 3)
    
    *(((result + 1) << 3) + &data_3078874) = result + 0x65
    *(((result + 1) << 3) + &data_3078878) = 0
    void* eax_8 = *var_8_1
    int32_t* ecx_5 = eax_8 + result * 0x134
    int32_t edi_2 = 0
    int32_t* var_8_2 = ecx_5
    
    if (*ecx_5 s> 0)
        while (true)
            int32_t edx_3 = ecx_5[1]
            int32_t ecx_6 = *(edx_3 + (edi_2 << 3) + 4)
            void* edx_4 = *(edx_3 + (edi_2 << 3))
            int32_t var_18_4 = ecx_6
            void* var_1c_4 = edx_4
            ecx_5 = sub_530b60((result + 1) * 0x134 + eax_8, edx_4, ecx_6, &data_8c35ec)
            edi_2 += 1
            
            if (edi_2 s>= *var_8_2)
                break
            
            ecx_5 = var_8_2
    
    void* eax_12 = data_3079208
    
    if (eax_12 != 0)
        int32_t eax_13 = *(eax_12 + 4)
        
        if (eax_13 == 0x19)
            int32_t var_18_5 = 0xffffffff
            ecx_5 = sub_538a80(result + 1)
        else if (eax_13 == 0x1b)
            ecx_5 = sub_539d30(result + 1)
    
    data_3078834 = 0
    sub_536c00(ecx_5)
    sub_56e600()
    return sub_56e480()
}
