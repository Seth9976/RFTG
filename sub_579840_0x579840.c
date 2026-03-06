// 函数名称: sub_579840
// 虚拟地址: 0x579840
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_579840()
{
    // 第一条实际指令: if (data_273bc2c s<= 0)
    if (data_273bc2c s<= 0)
        sub_4c5870("gUI.s.activeSetCount > 0", &data_83f3d3, "Editor\UIEditor.cpp", 0x53c, 
            "HighestSelectedItem")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t i = 1
    int32_t result = sub_575bb0(data_273ac2c)
    
    if (data_273bc2c s> 1)
        do
            int32_t result_1 = sub_575bb0((&data_273ac2c)[i])
            
            if (result_1 s> result)
                result = result_1
            
            i += 1
        while (i s< data_273bc2c)
    
    return result
}
