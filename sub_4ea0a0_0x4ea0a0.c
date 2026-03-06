// 函数名称: sub_4ea0a0
// 虚拟地址: 0x4ea0a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_4ea0a0(int32_t* arg1, int32_t arg2, int32_t* arg3, void* arg4)
{
    // 第一条实际指令: int32_t i = 0
    int32_t i = 0
    int32_t* var_8 = arg1
    int32_t* result
    
    do
        if (i == 0 || i == 1 || i == 3 || i == 2)
            int32_t edi_6 = arg3[1] * 4
            int32_t i_1 = i
            int32_t eax_3
            int32_t edx_1
            eax_3, edx_1 = sub_4e9cc0(arg3, arg2)
            
            if (eax_3 s>= edi_6 * 2)
                result, arg2 = sub_4e9a30(arg3, var_8, i)
            else
                result, arg2 = sub_4e9b00(eax_3, edx_1, var_8, arg3, i)
        else
            if (i != 4 && i != 5 && i != 6 && i != 7)
                sub_4c5870("Halt", &data_83f3d3, "Flanim.cpp", 0x615, "MayaDefCompressVertexList")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t edi_2 = arg3[1] * 2
            int32_t eax = sub_4e9ff0(arg4, i)
            
            if (eax s>= edi_2 * 2)
                result, arg2 = sub_4e9db0(arg4, var_8, i)
            else
                result, arg2 = sub_4e9e80(eax, arg4, var_8, arg4, arg3, i)
        
        var_8 = &var_8[3]
        i += 1
    while (i s< 8)
    
    return result
}
