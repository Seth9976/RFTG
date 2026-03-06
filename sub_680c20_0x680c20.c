// 函数名称: sub_680c20
// 虚拟地址: 0x680c20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_680c20(int32_t* arg1, int32_t* arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t* result = arg3
    int32_t* result = arg3
    int128_t* ebx = *result
    int32_t i = 0
    
    if (arg1[0x4e] s> 0)
        arg3 = arg2
        int32_t edi
        int32_t var_10_1 = edi
        
        do
            char* edi_2 = *arg3
            void* eax_1 = *(ebx + (i << 2))
            void* ecx_3 = arg1[0x1c] + eax_1
            
            while (eax_1 u< ecx_3)
                int32_t* edx_1
                edx_1.b = *edi_2
                *eax_1 = edx_1.b
                *(eax_1 + 1) = edx_1.b
                eax_1 += 2
                edi_2 = &edi_2[1]
            
            result = sub_67d1b0(ebx, i, ebx, i + 1, 1, arg1[0x1c])
            arg3 = &arg3[1]
            i += 2
        while (i s< arg1[0x4e])
    
    return result
}
