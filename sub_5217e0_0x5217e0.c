// 函数名称: sub_5217e0
// 虚拟地址: 0x5217e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_5217e0(int32_t* arg1, int32_t* arg2 @ esi)
{
    // 第一条实际指令: int32_t ecx = *arg1
    int32_t ecx = *arg1
    int32_t var_8 = 0
    
    if (ecx != 3 && ecx != 0xa)
        if (ecx == 2)
            double var_14_1 = fconvert.d(fconvert.t(arg1[2]))
            sub_4c4a50(arg2, "%g")
            return arg2
        
        if (ecx == 1)
            int64_t var_14
            var_14:4.d = arg1[2]
            sub_4c4a50(arg2, "%d")
            return arg2
        
        int32_t edx
        sub_4c4330(&data_83f3d3, edx, arg2)
    else
        char* eax = arg1[1]
        *arg2 = eax
        
        if (eax != 0 && *eax != 0)
            void* eax_2 = sub_4c4060(arg2)
            *(eax_2 + 4) += 1
    
    return arg2
}
