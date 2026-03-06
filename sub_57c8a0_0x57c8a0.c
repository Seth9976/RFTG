// 函数名称: sub_57c8a0
// 虚拟地址: 0x57c8a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_57c8a0(int32_t arg1)
{
    // 第一条实际指令: int32_t* result = sub_4f4890(data_273ac20)
    int32_t* result = sub_4f4890(data_273ac20)
    int32_t* result_1 = result
    int32_t ebx = result_1[1]
    int128_t* esi_1 = nullptr
    int32_t* result_2 = result_1
    int32_t var_14 = ebx
    
    if (ebx s> 0)
        int32_t edi_1 = data_273bc2c
        int32_t var_c_1 = arg1 - 1
        int32_t var_8_1 = 0
        
        do
            result = nullptr
            
            if (edi_1 s> 0)
                do
                    if ((&data_273ac2c)[result] == *(*result_1 + var_8_1))
                        int32_t var_24_1 = ebx - 1
                        result = sub_57c770(esi_1, result_1)
                        ebx -= 1
                        
                        if (esi_1 s< var_c_1)
                            result = 1
                            arg1 -= 1
                            var_c_1 -= 1
                        
                        edi_1 = data_273bc2c
                        result_1 = result_2
                        esi_1 -= 1
                        var_8_1 -= 0x118
                        break
                    
                    result += 1
                while (result s< edi_1)
            
            var_8_1 += 0x118
            esi_1 += 1
        while (esi_1 s< ebx)
    
    int32_t edi_3 = arg1
    
    if (edi_3 != 0xffffffff)
        int128_t* esi_3 = result_1[1] - 1
        
        while (esi_3 s>= ebx)
            if (esi_3 != edi_3)
                int32_t var_24_2 = edi_3
                result = sub_57c770(esi_3, result_1)
                result_1 = result_2
            
            esi_3 -= 1
            edi_3 += 1
    
    if (var_14 == result_1[1])
        return result
    
    sub_4c5870("numElements == layout.numElements", &data_83f3d3, "Editor\UIEditor.cpp", 0x96b, 
        "MoveSelectionToPosition")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
