// 函数名称: sub_603870
// 虚拟地址: 0x603870
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_603870(int32_t arg1, int32_t arg2, void* arg3, char* arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t result = divs.dp.d(sx.q(arg1 << 0x10), arg5)
    int32_t result = divs.dp.d(sx.q(arg1 << 0x10), arg5)
    int32_t i = arg5
    char* esi = arg4
    int32_t ebx
    ebx.b = 0
    int32_t edi = 0x10000
    int16_t var_7 = 0
    int32_t var_c = 0x10000
    int32_t result_1 = result
    
    if (i s> 0)
        void* ecx = arg3
        
        do
            if (edi s>= 0x10000)
                uint32_t j_1 = edi u>> 0x10
                int32_t var_c_1 = var_c + j_1 * 0xffff0000
                uint32_t j
                
                do
                    ebx.b = *ecx
                    var_7.b = *(ecx + 1)
                    char eax_5 = *(ecx + 2)
                    ecx += 3
                    j = j_1
                    j_1 -= 1
                    var_7:1.b = eax_5
                while (j != 1)
                edi = var_c_1
            
            edi += result_1
            *esi = ebx.b
            esi[1] = 0
            result = 0
            esi[2] = 0
            i -= 1
            esi = &esi[3]
            var_c = edi
        while (i s> 0)
    
    return result
}
