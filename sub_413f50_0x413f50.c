// 函数名称: sub_413f50
// 虚拟地址: 0x413f50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_413f50(void* arg1)
{
    // 第一条实际指令: if ((data_31602dc & 1) == 0)
    if ((data_31602dc & 1) == 0)
        int32_t edx_1 = data_307c2a4
        data_31602dc.d |= 1
        int32_t eax_1 = data_307c23c
        data_315f93c = edx_1
        int32_t edx_2 = data_307c248
        data_315f938 = eax_1
        int32_t eax_2 = data_307c350
        data_315f944 = edx_2
        int32_t edx_3 = data_307c224
        data_315f940 = eax_2
        data_315f948 = edx_3
        data_315f94c = eax_2
    
    int32_t eax_3 = *(arg1 + 0x190)
    
    if (eax_3 == 0 && *(arg1 + 0x1cb) != eax_3.b)
        return data_307c30c
    
    return (&data_315f938)[eax_3]
}
