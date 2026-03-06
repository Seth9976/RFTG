// 函数名称: sub_660f70
// 虚拟地址: 0x660f70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_660f70(char* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_18 = edi
    int32_t var_c = 0
    int128_t* result = sub_6663c0(1, arg6, arg5)
    
    if (result != 0)
        result[0x28].d = 0x7fffffff
        *(result + 0x284) = 0x7fffffff
        *(result + 0x288) = 0
        *(result + 0x28c) = 0
        int32_t __saved_ebp
        __setjmp3(&__saved_ebp, 0, edi, sub_664090(result, sub_5ab190, 0x40), 0)
        sub_6664b0(result, arg5, arg6, arg7)
        sub_6640e0(result, arg2, arg3, arg4)
        
        if (sub_663660(result, arg1) == 0)
            var_c = 1
        
        if (var_c == 0)
            *(result + 0xb4) = 0x2000
            result[0xb].d = sub_666560(result, *(result + 0xb4))
            
            if (result[0xb].d == 0)
                var_c = 1
        
        *(result + 0x98) = sub_6621f0
        *(result + 0x9c) = sub_662250
        result[0xa].d = result
        char* var_1c_3
        
        if (var_c == 0)
            switch (sub_6753b0(result + 0x78, "1.2.7", 0x38) + 6)
                case 0
                    sub_664100(result, "zlib version error")
                    var_c = 1
                case 2
                    var_1c_3 = "zlib memory error"
                    goto label_6610ea
                case 4
                    sub_664100(result, "zlib stream error")
                    var_c = 1
                case 6
                    nop
                default
                    var_1c_3 = "Unknown zlib error"
                label_6610ea:
                    sub_664100(result, var_1c_3)
                    var_c = 1
        
        if (var_c == 0)
            *(result + 0x84) = result[0xb].d
            *(result + 0x88) = *(result + 0xb4)
            sub_664480(result, 0, 0)
            return result
        
        sub_666530(result, result[0xb].d)
        result[0xb].d = 0
        sub_666450(result, arg7, arg5)
    
    return 0
}
