// 函数名称: sub_53d800
// 虚拟地址: 0x53d800
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

LRESULTsub_53d800()
{
    // 第一条实际指令: LRESULT result = data_3079208
    LRESULT result = data_3079208
    
    if (result != 0 && *(result + 4) == 0x19)
        result = sub_466320(result)
        LRESULT result_1 = result
        
        if (result_1 != 0)
            result = SendMessageA(GetDlgItem(data_3078830, 0x76), 0x188, 0, 0)
            
            if (result != 0xffffffff)
                int32_t ebx_1 = sub_537960(result) + 1
                int32_t var_8_1 = 0
                
                if (ebx_1 s> 0)
                    int32_t eax_9
                    
                    do
                        int32_t var_20_2 = 0
                        int32_t* eax_4
                        int32_t ecx_1
                        eax_4, ecx_1 = sub_4fff30(data_30d7434, 0)
                        sub_505290(result_1, eax_4, ecx_1, result)
                        
                        if (result u> 0xff)
                            sub_4c5870("emitterIndex >= 0 && emitterIndex < MAX_EMITTERS", 
                                &data_83f3d3, "Windows\EditorWindow.cpp", 0x94d, "ToolDataDeleteItem")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        if (0xff - result s> 0)
                            sub_5a6c10((result << 3) + &data_3078874, (result << 3) + &data_307887c, 
                                (0xff - result) << 3)
                        
                        eax_9 = var_8_1 + 1
                        var_8_1 = eax_9
                    while (eax_9 s< ebx_1)
                
                int32_t ecx_3 = *(result_1 + 4)
                WPARAM eax_10 = 0xffffffff
                
                if (result == ecx_3 && ecx_3 s> 0)
                    eax_10 = result - 1
                
                char* ecx_4 = data_3079208
                
                if (ecx_4 != 0)
                    ecx_4 = *(ecx_4 + 4)
                    
                    if (ecx_4 == 0x19)
                        int32_t var_20_4 = 0xffffffff
                        ecx_4 = sub_538a80(eax_10)
                    else if (ecx_4 == 0x1b)
                        ecx_4 = sub_539d30(eax_10)
                
                sub_536c00(ecx_4)
                sub_56e600()
                return sub_56e480()
    
    return result
}
