// 函数名称: sub_510950
// 虚拟地址: 0x510950
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_510950(int32_t arg1, int32_t arg2, char arg3)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t* result = sub_50c140(*sub_510b30(ecx, arg1))
    int32_t* result_1 = result
    int32_t i = 0
    
    if (result_1[1] s> 0)
        int32_t ebx_1 = 0
        
        do
            result = *result_1
            
            if ((*(result + ebx_1 + 0x2c) & arg2) != 0)
                result = sub_50c830(i, arg1, sub_510b30(arg2, arg1))
                int32_t ecx_2
                ecx_2.b = arg3
                result[0x19] = result[0x17] + 1
                result[0x1a].b = ecx_2.b
            
            i += 1
            ebx_1 += 0xb8
        while (i s< result_1[1])
    
    return result
}
