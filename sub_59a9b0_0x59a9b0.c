// 函数名称: sub_59a9b0
// 虚拟地址: 0x59a9b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_59a9b0(int32_t* arg1)
{
    // 第一条实际指令: int32_t* edx = *arg1
    int32_t* edx = *arg1
    int32_t result = edx[1] * *edx
    char* ecx = arg1[3]
    
    if (edx[3] != 3)
        if (data_307b5c0 == 0)
            if (result != 0)
                int32_t esi_3 = result
                int32_t i
                
                do
                    edx.b = *ecx
                    result.b = ecx[2]
                    *ecx = result.b
                    ecx[2] = edx.b
                    ecx = &ecx[4]
                    i = esi_3
                    esi_3 -= 1
                while (i != 1)
        else if (result != 0)
            int32_t ebx
            int32_t var_8 = ebx
            int32_t edi = result
            int32_t i_1
            
            do
                result.b = ecx[3]
                ebx.b = *ecx
                
                if (result.b == 0)
                    edx.b = ecx[2]
                    *ecx = edx.b
                    ecx[2] = ebx.b
                else
                    uint32_t esi_2 = zx.d(result.b)
                    *ecx = (divs.dp.d(sx.q(zx.d(ecx[2]) * 0xff), esi_2)).b
                    ecx[1] = (divs.dp.d(sx.q(zx.d(ecx[1]) * 0xff), esi_2)).b
                    result = divs.dp.d(sx.q(zx.d(ebx.b) * 0xff), esi_2)
                    ecx[2] = result.b
                
                ecx = &ecx[4]
                i_1 = edi
                edi -= 1
            while (i_1 != 1)
    else if (result != 0)
        int32_t esi_1 = result
        int32_t i_2
        
        do
            edx.b = *ecx
            result.b = ecx[2]
            *ecx = result.b
            ecx[2] = edx.b
            ecx = &ecx[3]
            i_2 = esi_1
            esi_1 -= 1
        while (i_2 != 1)
    
    return result
}
