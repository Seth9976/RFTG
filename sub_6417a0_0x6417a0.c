// 函数名称: sub_6417a0
// 虚拟地址: 0x6417a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_6417a0(void* arg1, void* arg2, int32_t arg3, char arg4, char arg5, char arg6, char arg7)
{
    // 第一条实际指令: void* ecx = arg1
    void* ecx = arg1
    void* esi = *(ecx + 4)
    int32_t edi = 0xff - zx.d(arg7)
    uint32_t eax_1 = zx.d(*(esi + 9))
    
    if (eax_1 == 2)
        uint32_t ebx_45 = zx.d(*(esi + 9))
        
        if (arg3 == 1)
            int32_t edx_409 = *(arg2 + 8)
            arg1 = *(arg2 + 0xc)
            int32_t temp0_7 = divs.dp.d(sx.q(*(ecx + 0x10)), ebx_45)
            void* ebx_85 = *(ecx + 0x14) + ((*(arg2 + 4) * temp0_7 + *arg2) << 1)
            
            while (true)
                void* edx_414 = arg1
                arg1 -= 1
                
                if (edx_414 == 0)
                    break
                
                int32_t eax_421
                int32_t edx_415
                edx_415:eax_421 = sx.q(edx_409 + 3)
                int32_t var_8_8 = (eax_421 + (edx_415 & 3)) s>> 2
                
                switch (edx_409 & 3)
                    case 0
                        goto label_642e88
                    case 1
                        goto label_642d8f
                    case 2
                        while (true)
                            int32_t eax_491
                            int32_t edx_477
                            edx_477:eax_491 = mulu.dp.d(0x80808081, 
                                zx.d(*(((*(esi + 0x10) & zx.d(*ebx_85)) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))])) * edi)
                            int32_t eax_499
                            int32_t edx_482
                            edx_482:eax_499 = mulu.dp.d(0x80808081, 
                                zx.d(*(((*(esi + 0xc) & zx.d(*ebx_85)) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))])) * edi)
                            uint16_t eax_501 =
                                (((edx_477 u>> 7) + zx.d(arg5)) u>> *(esi + 0x1d)).w << *(esi + 0x21)
                                | (((edx_482 u>> 7) + zx.d(arg4)) u>> *(esi + 0x1c)).w << *(esi + 0x20)
                            int32_t eax_505
                            int32_t edx_489
                            edx_489:eax_505 = mulu.dp.d(0x80808081, 
                                zx.d(*(((*(esi + 0x14) & zx.d(*ebx_85)) u>> *(esi + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1e))])) * edi)
                            ebx_85 += 2
                            *(ebx_85 - 2) = eax_501
                                | (((edx_489 u>> 7) + zx.d(arg6)) u>> *(esi + 0x1e)).w << *(esi + 0x22)
                                | *(esi + 0x18)
                        label_642d8f:
                            uint32_t edx_419 = (*(esi + 0x10) & zx.d(*ebx_85)) u>> *(esi + 0x21)
                            ebx_85 += 2
                            int32_t eax_429
                            int32_t edx_420
                            edx_420:eax_429 = mulu.dp.d(0x80808081, 
                                zx.d(*(edx_419 + (&data_8bac68)[zx.d(*(esi + 0x1d))])) * edi)
                            int32_t eax_437
                            int32_t edx_425
                            edx_425:eax_437 = mulu.dp.d(0x80808081, 
                                zx.d(*(((*(esi + 0xc) & zx.d(*(ebx_85 - 2))) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))])) * edi)
                            uint16_t eax_439 =
                                (((edx_420 u>> 7) + zx.d(arg5)) u>> *(esi + 0x1d)).w << *(esi + 0x21)
                                | (((edx_425 u>> 7) + zx.d(arg4)) u>> *(esi + 0x1c)).w << *(esi + 0x20)
                            int32_t eax_443
                            int32_t edx_432
                            edx_432:eax_443 = mulu.dp.d(0x80808081, 
                                zx.d(*(((*(esi + 0x14) & zx.d(*(ebx_85 - 2))) u>> *(esi + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1e))])) * edi)
                            *(ebx_85 - 2) = eax_439
                                | (((edx_432 u>> 7) + zx.d(arg6)) u>> *(esi + 0x1e)).w << *(esi + 0x22)
                                | *(esi + 0x18)
                            int32_t eax_447 = var_8_8 - 1
                            var_8_8 = eax_447
                            
                            if (eax_447 s<= 0)
                                break
                            
                        label_642e88:
                            int32_t eax_451
                            int32_t edx_439
                            edx_439:eax_451 = mulu.dp.d(0x80808081, 
                                zx.d(*(((*(esi + 0x14) & zx.d(*ebx_85)) u>> *(esi + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1e))])) * edi)
                            int32_t eax_459
                            int32_t edx_444
                            edx_444:eax_459 = mulu.dp.d(0x80808081, 
                                zx.d(*(((*(esi + 0x10) & zx.d(*ebx_85)) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))])) * edi)
                            uint16_t eax_461 =
                                (((edx_439 u>> 7) + zx.d(arg6)) u>> *(esi + 0x1e)).w << *(esi + 0x22)
                                | (((edx_444 u>> 7) + zx.d(arg5)) u>> *(esi + 0x1d)).w << *(esi + 0x21)
                            int32_t eax_465
                            int32_t edx_451
                            edx_451:eax_465 = mulu.dp.d(0x80808081, 
                                zx.d(*(((*(esi + 0xc) & zx.d(*ebx_85)) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))])) * edi)
                            ebx_85 += 2
                            *(ebx_85 - 2) = eax_461
                                | (((edx_451 u>> 7) + zx.d(arg4)) u>> *(esi + 0x1c)).w << *(esi + 0x20)
                                | *(esi + 0x18)
                        label_642f62:
                            int32_t eax_471
                            int32_t edx_458
                            edx_458:eax_471 = mulu.dp.d(0x80808081, 
                                zx.d(*(((*(esi + 0x14) & zx.d(*ebx_85)) u>> *(esi + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1e))])) * edi)
                            int32_t eax_479
                            int32_t edx_463
                            edx_463:eax_479 = mulu.dp.d(0x80808081, 
                                zx.d(*(((*(esi + 0x10) & zx.d(*ebx_85)) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))])) * edi)
                            uint16_t eax_481 =
                                (((edx_458 u>> 7) + zx.d(arg6)) u>> *(esi + 0x1e)).w << *(esi + 0x22)
                                | (((edx_463 u>> 7) + zx.d(arg5)) u>> *(esi + 0x1d)).w << *(esi + 0x21)
                            int32_t eax_485
                            int32_t edx_470
                            edx_470:eax_485 = mulu.dp.d(0x80808081, 
                                zx.d(*(((*(esi + 0xc) & zx.d(*ebx_85)) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))])) * edi)
                            ebx_85 += 2
                            *(ebx_85 - 2) = eax_481
                                | (((edx_470 u>> 7) + zx.d(arg4)) u>> *(esi + 0x1c)).w << *(esi + 0x20)
                                | *(esi + 0x18)
                    case 3
                        goto label_642f62
                
                ebx_85 += (temp0_7 - edx_409) << 1
        else if (arg3 == 2)
            void* eax_366 = *(arg2 + 8)
            arg7.d = *(arg2 + 0xc)
            int32_t temp0_6 = divs.dp.d(sx.q(*(ecx + 0x10)), ebx_45)
            void* ebx_57 = temp0_6 - eax_366
            void* var_8_7 = ebx_57
            int16_t* edi_9 = *(ecx + 0x14) + ((*(arg2 + 4) * temp0_6 + *arg2) << 1)
            
            while (true)
                int32_t eax_371 = arg7.d
                arg7.d = eax_371 - 1
                
                if (eax_371 == 0)
                    break
                
                int32_t eax_374
                int32_t edx_375
                edx_375:eax_374 = sx.q(eax_366 + 3)
                int32_t var_c_13 = (eax_374 + (edx_375 & 3)) s>> 2
                
                switch (eax_366 & 3)
                    case nullptr
                        goto label_642ab3
                    case 1
                        goto label_6429df
                    case 2
                        while (true)
                            uint32_t eax_405 = zx.d(*edi_9)
                            uint32_t eax_411 = zx.d(*(((*(esi + 0xc) & eax_405) u>> *(esi + 0x20))
                                + (&data_8bac68)[zx.d(*(esi + 0x1c))])) + zx.d(arg4)
                            
                            if (eax_411 u> 0xff)
                                eax_411 = 0xff
                            
                            uint32_t ebx_80 = zx.d(*(((*(esi + 0x10) & eax_405) u>> *(esi + 0x21))
                                + (&data_8bac68)[zx.d(*(esi + 0x1d))])) + zx.d(arg5)
                            
                            if (ebx_80 u> 0xff)
                                ebx_80 = 0xff
                            
                            uint32_t edx_407 = zx.d(*(((*(esi + 0x14) & eax_405) u>> *(esi + 0x22))
                                + (&data_8bac68)[zx.d(*(esi + 0x1e))])) + zx.d(arg6)
                            
                            if (edx_407 u> 0xff)
                                edx_407 = 0xff
                            
                            uint16_t edx_408 = (edx_407 u>> *(esi + 0x1e)).w << *(esi + 0x22)
                                | (ebx_80 u>> *(esi + 0x1d)).w << *(esi + 0x21)
                                | (eax_411 u>> *(esi + 0x1c)).w << *(esi + 0x20)
                            edi_9 = &edi_9[1]
                            edi_9[-1] = edx_408 | *(esi + 0x18)
                        label_6429df:
                            uint32_t eax_379 = zx.d(*edi_9)
                            uint32_t eax_385 = zx.d(*(((*(esi + 0xc) & eax_379) u>> *(esi + 0x20))
                                + (&data_8bac68)[zx.d(*(esi + 0x1c))])) + zx.d(arg4)
                            
                            if (eax_385 u> 0xff)
                                eax_385 = 0xff
                            
                            uint32_t ebx_62 = zx.d(*(((*(esi + 0x10) & eax_379) u>> *(esi + 0x21))
                                + (&data_8bac68)[zx.d(*(esi + 0x1d))])) + zx.d(arg5)
                            
                            if (ebx_62 u> 0xff)
                                ebx_62 = 0xff
                            
                            uint32_t edx_383 = zx.d(*(((*(esi + 0x14) & eax_379) u>> *(esi + 0x22))
                                + (&data_8bac68)[zx.d(*(esi + 0x1e))])) + zx.d(arg6)
                            
                            if (edx_383 u> 0xff)
                                edx_383 = 0xff
                            
                            edi_9 = &edi_9[1]
                            uint16_t edx_384 = (edx_383 u>> *(esi + 0x1e)).w << *(esi + 0x22)
                                | (ebx_62 u>> *(esi + 0x1d)).w << *(esi + 0x21)
                                | (eax_385 u>> *(esi + 0x1c)).w << *(esi + 0x20)
                            int32_t eax_388 = var_c_13 - 1
                            edi_9[-1] = edx_384 | *(esi + 0x18)
                            var_c_13 = eax_388
                            
                            if (eax_388 s<= 0)
                                break
                            
                        label_642ab3:
                            uint32_t eax_389 = zx.d(*edi_9)
                            uint32_t eax_395 = zx.d(*(((*(esi + 0xc) & eax_389) u>> *(esi + 0x20))
                                + (&data_8bac68)[zx.d(*(esi + 0x1c))])) + zx.d(arg4)
                            
                            if (eax_395 u> 0xff)
                                eax_395 = 0xff
                            
                            uint32_t ebx_68 = zx.d(*(((*(esi + 0x10) & eax_389) u>> *(esi + 0x21))
                                + (&data_8bac68)[zx.d(*(esi + 0x1d))])) + zx.d(arg5)
                            
                            if (ebx_68 u> 0xff)
                                ebx_68 = 0xff
                            
                            uint32_t edx_391 = zx.d(*(((*(esi + 0x14) & eax_389) u>> *(esi + 0x22))
                                + (&data_8bac68)[zx.d(*(esi + 0x1e))])) + zx.d(arg6)
                            
                            if (edx_391 u> 0xff)
                                edx_391 = 0xff
                            
                            uint16_t edx_392 = (edx_391 u>> *(esi + 0x1e)).w << *(esi + 0x22)
                                | (ebx_68 u>> *(esi + 0x1d)).w << *(esi + 0x21)
                                | (eax_395 u>> *(esi + 0x1c)).w << *(esi + 0x20)
                            edi_9 = &edi_9[1]
                            edi_9[-1] = edx_392 | *(esi + 0x18)
                        label_642b78:
                            uint32_t eax_397 = zx.d(*edi_9)
                            uint32_t eax_403 = zx.d(*(((*(esi + 0xc) & eax_397) u>> *(esi + 0x20))
                                + (&data_8bac68)[zx.d(*(esi + 0x1c))])) + zx.d(arg4)
                            
                            if (eax_403 u> 0xff)
                                eax_403 = 0xff
                            
                            uint32_t ebx_74 = zx.d(*(((*(esi + 0x10) & eax_397) u>> *(esi + 0x21))
                                + (&data_8bac68)[zx.d(*(esi + 0x1d))])) + zx.d(arg5)
                            
                            if (ebx_74 u> 0xff)
                                ebx_74 = 0xff
                            
                            uint32_t edx_399 = zx.d(*(((*(esi + 0x14) & eax_397) u>> *(esi + 0x22))
                                + (&data_8bac68)[zx.d(*(esi + 0x1e))])) + zx.d(arg6)
                            
                            if (edx_399 u> 0xff)
                                edx_399 = 0xff
                            
                            uint16_t edx_400 = (edx_399 u>> *(esi + 0x1e)).w << *(esi + 0x22)
                                | (ebx_74 u>> *(esi + 0x1d)).w << *(esi + 0x21)
                                | (eax_403 u>> *(esi + 0x1c)).w << *(esi + 0x20)
                            edi_9 = &edi_9[1]
                            edi_9[-1] = edx_400 | *(esi + 0x18)
                        
                        ebx_57 = var_8_7
                    case 3
                        goto label_642b78
                
                edi_9 = &edi_9[ebx_57]
        else
            void* edx_271 = *(arg2 + 8)
            void* eax_281 = *(arg2 + 0xc)
            
            if (arg3 == 4)
                arg1 = eax_281
                int32_t temp0_5 = divs.dp.d(sx.q(*(ecx + 0x10)), ebx_45)
                void* ebx_47 = temp0_5 - edx_271
                void* var_10_12 = ebx_47
                int16_t* edi_8 = *(ecx + 0x14) + ((*(arg2 + 4) * temp0_5 + *arg2) << 1)
                
                while (true)
                    void* ecx_250 = arg1
                    arg1 -= 1
                    
                    if (ecx_250 == 0)
                        break
                    
                    int32_t eax_307
                    int32_t edx_288
                    edx_288:eax_307 = sx.q(edx_271 + 3)
                    int32_t var_c_12 = (eax_307 + (edx_288 & 3)) s>> 2
                    
                    switch (edx_271 & 3)
                        case nullptr
                            goto label_642705
                        case 1
                            goto label_642628
                        case 2
                            while (true)
                                uint32_t ebx_54 = zx.d(*edi_8)
                                int32_t eax_355
                                int32_t edx_354
                                edx_354:eax_355 = mulu.dp.d(0x80808081, 
                                    zx.d(*(((*(esi + 0x14) & ebx_54) u>> *(esi + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1e))])) * zx.d(arg6))
                                int32_t eax_360
                                int32_t edx_360
                                edx_360:eax_360 = mulu.dp.d(0x80808081, 
                                    zx.d(*(((*(esi + 0x10) & ebx_54) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))])) * zx.d(arg5))
                                char ebx_55 = *(esi + 0x20)
                                int32_t eax_364
                                int32_t edx_367
                                edx_367:eax_364 = mulu.dp.d(0x80808081, 
                                    zx.d(*(((*(esi + 0xc) & ebx_54) u>> ebx_55)
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))])) * zx.d(arg4))
                                uint16_t eax_365 = (edx_354 u>> 7 u>> *(esi + 0x1e)).w << *(esi + 0x22)
                                    | (edx_360 u>> 7 u>> *(esi + 0x1d)).w << *(esi + 0x21)
                                    | (edx_367 u>> 7 u>> *(esi + 0x1c)).w << ebx_55
                                edi_8 = &edi_8[1]
                                edi_8[-1] = eax_365 | *(esi + 0x18)
                            label_642628:
                                uint32_t ebx_48 = zx.d(*edi_8)
                                edi_8 = &edi_8[1]
                                int32_t eax_314
                                int32_t edx_294
                                edx_294:eax_314 = mulu.dp.d(0x80808081, 
                                    zx.d(*(((*(esi + 0x14) & ebx_48) u>> *(esi + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1e))])) * zx.d(arg6))
                                int32_t eax_319
                                int32_t edx_300
                                edx_300:eax_319 = mulu.dp.d(0x80808081, 
                                    zx.d(*(((*(esi + 0x10) & ebx_48) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))])) * zx.d(arg5))
                                char ebx_49 = *(esi + 0x20)
                                int32_t eax_323
                                int32_t edx_307
                                edx_307:eax_323 = mulu.dp.d(0x80808081, 
                                    zx.d(*(((*(esi + 0xc) & ebx_48) u>> ebx_49)
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))])) * zx.d(arg4))
                                uint16_t eax_324 = (edx_294 u>> 7 u>> *(esi + 0x1e)).w << *(esi + 0x22)
                                    | (edx_300 u>> 7 u>> *(esi + 0x1d)).w << *(esi + 0x21)
                                    | (edx_307 u>> 7 u>> *(esi + 0x1c)).w << ebx_49
                                edi_8[-1] = eax_324 | *(esi + 0x18)
                                int32_t eax_326 = var_c_12 - 1
                                var_c_12 = eax_326
                                
                                if (eax_326 s<= 0)
                                    break
                                
                            label_642705:
                                uint32_t ebx_50 = zx.d(*edi_8)
                                int32_t eax_329
                                int32_t edx_314
                                edx_314:eax_329 = mulu.dp.d(0x80808081, 
                                    zx.d(*(((*(esi + 0x14) & ebx_50) u>> *(esi + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1e))])) * zx.d(arg6))
                                int32_t eax_334
                                int32_t edx_320
                                edx_320:eax_334 = mulu.dp.d(0x80808081, 
                                    zx.d(*(((*(esi + 0x10) & ebx_50) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))])) * zx.d(arg5))
                                char ebx_51 = *(esi + 0x20)
                                int32_t eax_338
                                int32_t edx_327
                                edx_327:eax_338 = mulu.dp.d(0x80808081, 
                                    zx.d(*(((*(esi + 0xc) & ebx_50) u>> ebx_51)
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))])) * zx.d(arg4))
                                uint16_t eax_339 = (edx_314 u>> 7 u>> *(esi + 0x1e)).w << *(esi + 0x22)
                                    | (edx_320 u>> 7 u>> *(esi + 0x1d)).w << *(esi + 0x21)
                                    | (edx_327 u>> 7 u>> *(esi + 0x1c)).w << ebx_51
                                edi_8 = &edi_8[1]
                                edi_8[-1] = eax_339 | *(esi + 0x18)
                            label_6427d3:
                                uint32_t ebx_52 = zx.d(*edi_8)
                                int32_t eax_342
                                int32_t edx_334
                                edx_334:eax_342 = mulu.dp.d(0x80808081, 
                                    zx.d(*(((*(esi + 0x10) & ebx_52) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))])) * zx.d(arg5))
                                int32_t eax_347
                                int32_t edx_340
                                edx_340:eax_347 = mulu.dp.d(0x80808081, 
                                    zx.d(*(((*(esi + 0xc) & ebx_52) u>> *(esi + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))])) * zx.d(arg4))
                                char ebx_53 = *(esi + 0x22)
                                int32_t eax_351
                                int32_t edx_347
                                edx_347:eax_351 = mulu.dp.d(0x80808081, 
                                    zx.d(*(((*(esi + 0x14) & ebx_52) u>> ebx_53)
                                        + (&data_8bac68)[zx.d(*(esi + 0x1e))])) * zx.d(arg6))
                                uint16_t eax_352 = (edx_334 u>> 7 u>> *(esi + 0x1d)).w << *(esi + 0x21)
                                    | (edx_340 u>> 7 u>> *(esi + 0x1c)).w << *(esi + 0x20)
                                    | (edx_347 u>> 7 u>> *(esi + 0x1e)).w << ebx_53
                                edi_8 = &edi_8[1]
                                edi_8[-1] = eax_352 | *(esi + 0x18)
                            
                            ebx_47 = var_10_12
                        case 3
                            goto label_6427d3
                    
                    edi_8 = &edi_8[ebx_47]
            else
                arg7.d = eax_281
                int32_t temp0_4 = divs.dp.d(sx.q(*(ecx + 0x10)), ebx_45)
                ebx_45.b = arg6
                void* edi_6 = *(ecx + 0x14) + ((*(arg2 + 4) * temp0_4 + *arg2) << 1)
                
                while (true)
                    int32_t eax_286 = arg7.d
                    arg7.d = eax_286 - 1
                    
                    if (eax_286 == 0)
                        break
                    
                    int32_t eax_289
                    int32_t edx_278
                    edx_278:eax_289 = sx.q(edx_271 + 3)
                    int32_t var_8_5 = (eax_289 + (edx_278 & 3)) s>> 2
                    
                    switch (edx_271 & 3)
                        case 0
                            goto label_6424e5
                        case 1
                            goto label_64248d
                        case 2
                            while (true)
                                int32_t eax_293
                                eax_293.b = arg4
                                eax_293.b u>>= *(esi + 0x1c)
                                uint32_t edx_279 = zx.d(eax_293.b)
                                eax_293.b = arg5
                                edx_279.w <<= *(esi + 0x20)
                                eax_293.b u>>= *(esi + 0x1d)
                                edx_279.w |= zx.w(eax_293.b) << *(esi + 0x21)
                                uint16_t eax_298
                                eax_298.b = ebx_45.b
                                eax_298.b u>>= *(esi + 0x1e)
                                edx_279.w |= zx.w(eax_298.b) << *(esi + 0x22)
                                edx_279.w |= *(esi + 0x18)
                                edi_6 += 2
                                *(edi_6 - 2) = edx_279.w
                            label_64248d:
                                edx_279.b = arg4
                                edx_279.b u>>= *(esi + 0x1c)
                                uint16_t eax_294 = zx.w(edx_279.b)
                                edx_279.b = arg5
                                edx_279.b u>>= *(esi + 0x1d)
                                uint16_t edx_280
                                edx_280.b = ebx_45.b
                                edx_280.b u>>= *(esi + 0x1e)
                                edi_6 += 2
                                *(edi_6 - 2) = eax_294 << *(esi + 0x20)
                                    | zx.w(edx_279.b) << *(esi + 0x21)
                                    | zx.w(edx_280.b) << *(esi + 0x22) | *(esi + 0x18)
                                eax_293 = var_8_5 - 1
                                var_8_5 = eax_293
                                
                                if (eax_293 s<= 0)
                                    break
                                
                            label_6424e5:
                                eax_293.b = arg4
                                eax_293.b u>>= *(esi + 0x1c)
                                edx_279 = zx.d(eax_293.b)
                                eax_293.b = arg5
                                edx_279.w <<= *(esi + 0x20)
                                eax_293.b u>>= *(esi + 0x1d)
                                edx_279.w |= zx.w(eax_293.b) << *(esi + 0x21)
                                uint16_t eax_296
                                eax_296.b = ebx_45.b
                                eax_296.b u>>= *(esi + 0x1e)
                                edx_279.w |= zx.w(eax_296.b) << *(esi + 0x22)
                                edx_279.w |= *(esi + 0x18)
                                edi_6 += 2
                                *(edi_6 - 2) = edx_279.w
                            label_64252e:
                                edx_279.b = arg4
                                edx_279.b u>>= *(esi + 0x1c)
                                eax_293 = zx.d(edx_279.b)
                                edx_279.b = arg5
                                eax_293.w <<= *(esi + 0x20)
                                edx_279.b u>>= *(esi + 0x1d)
                                eax_293.w |= zx.w(edx_279.b) << *(esi + 0x21)
                                uint16_t edx_282
                                edx_282.b = ebx_45.b
                                edx_282.b u>>= *(esi + 0x1e)
                                eax_293.w |= zx.w(edx_282.b) << *(esi + 0x22)
                                eax_293.w |= *(esi + 0x18)
                                edi_6 += 2
                                *(edi_6 - 2) = eax_293.w
                        case 3
                            goto label_64252e
                    
                    edi_6 += (temp0_4 - edx_271) << 1
    else
        if (eax_1 != 4)
            sub_5cd050(4)
            return 0xffffffff
        
        uint32_t ebx = zx.d(*(esi + 9))
        
        if (arg3 == 1)
            void* edx_179 = *(arg2 + 8)
            arg7.d = *(arg2 + 0xc)
            int32_t temp0_3 = divs.dp.d(sx.q(*(ecx + 0x10)), ebx)
            void* ebx_44 = *(ecx + 0x14) + ((*(arg2 + 4) * temp0_3 + *arg2) << 2)
            
            while (true)
                int32_t eax_184 = arg7.d
                arg7.d = eax_184 - 1
                
                if (eax_184 == 0)
                    break
                
                int32_t eax_187
                int32_t edx_185
                edx_185:eax_187 = sx.q(edx_179 + 3)
                int32_t var_8_4 = (eax_187 + (edx_185 & 3)) s>> 2
                
                switch (edx_179 & 3)
                    case nullptr
                        goto label_6421c5
                    case 1
                        goto label_6420e0
                    case 2
                        while (true)
                            int32_t eax_259
                            int32_t edx_253
                            edx_253:eax_259 = mulu.dp.d(0x80808081, 
                                zx.d(*(((*(esi + 0x14) & *ebx_44) u>> *(esi + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1e))])) * edi)
                            int32_t eax_267
                            int32_t edx_258
                            edx_258:eax_267 = mulu.dp.d(0x80808081, 
                                zx.d(*(((*(esi + 0x10) & *ebx_44) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))])) * edi)
                            uint32_t eax_270 =
                                ((edx_253 u>> 7) + zx.d(arg6)) u>> *(esi + 0x1e) << *(esi + 0x22)
                                | ((edx_258 u>> 7) + zx.d(arg5)) u>> *(esi + 0x1d) << *(esi + 0x21)
                            int32_t eax_273
                            int32_t edx_266
                            edx_266:eax_273 = mulu.dp.d(0x80808081, 
                                zx.d(*(((*(esi + 0xc) & *ebx_44) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))])) * edi)
                            ebx_44 += 4
                            *(ebx_44 - 4) = eax_270
                                | ((edx_266 u>> 7) + zx.d(arg4)) u>> *(esi + 0x1c) << *(esi + 0x20)
                                | *(esi + 0x18)
                        label_6420e0:
                            uint32_t edx_189 = (*(esi + 0x14) & *ebx_44) u>> *(esi + 0x22)
                            ebx_44 += 4
                            int32_t eax_194
                            int32_t edx_190
                            edx_190:eax_194 = mulu.dp.d(0x80808081, 
                                zx.d(*(edx_189 + (&data_8bac68)[zx.d(*(esi + 0x1e))])) * edi)
                            int32_t eax_202
                            int32_t edx_195
                            edx_195:eax_202 = mulu.dp.d(0x80808081, 
                                zx.d(*(((*(esi + 0x10) & *(ebx_44 - 4)) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))])) * edi)
                            uint32_t eax_205 =
                                ((edx_190 u>> 7) + zx.d(arg6)) u>> *(esi + 0x1e) << *(esi + 0x22)
                                | ((edx_195 u>> 7) + zx.d(arg5)) u>> *(esi + 0x1d) << *(esi + 0x21)
                            int32_t eax_208
                            int32_t edx_203
                            edx_203:eax_208 = mulu.dp.d(0x80808081, 
                                zx.d(*(((*(esi + 0xc) & *(ebx_44 - 4)) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))])) * edi)
                            *(ebx_44 - 4) = eax_205
                                | ((edx_203 u>> 7) + zx.d(arg4)) u>> *(esi + 0x1c) << *(esi + 0x20)
                                | *(esi + 0x18)
                            int32_t eax_214 = var_8_4 - 1
                            var_8_4 = eax_214
                            
                            if (eax_214 s<= 0)
                                break
                            
                        label_6421c5:
                            int32_t eax_217
                            int32_t edx_211
                            edx_211:eax_217 = mulu.dp.d(0x80808081, 
                                zx.d(*(((*(esi + 0x14) & *ebx_44) u>> *(esi + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1e))])) * edi)
                            int32_t eax_225
                            int32_t edx_216
                            edx_216:eax_225 = mulu.dp.d(0x80808081, 
                                zx.d(*(((*(esi + 0x10) & *ebx_44) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))])) * edi)
                            uint32_t eax_228 =
                                ((edx_211 u>> 7) + zx.d(arg6)) u>> *(esi + 0x1e) << *(esi + 0x22)
                                | ((edx_216 u>> 7) + zx.d(arg5)) u>> *(esi + 0x1d) << *(esi + 0x21)
                            int32_t eax_231
                            int32_t edx_224
                            edx_224:eax_231 = mulu.dp.d(0x80808081, 
                                zx.d(*(((*(esi + 0xc) & *ebx_44) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))])) * edi)
                            ebx_44 += 4
                            *(ebx_44 - 4) = eax_228
                                | ((edx_224 u>> 7) + zx.d(arg4)) u>> *(esi + 0x1c) << *(esi + 0x20)
                                | *(esi + 0x18)
                        label_64228b:
                            int32_t eax_238
                            int32_t edx_232
                            edx_232:eax_238 = mulu.dp.d(0x80808081, 
                                zx.d(*(((*(esi + 0x10) & *ebx_44) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))])) * edi)
                            int32_t eax_246
                            int32_t edx_237
                            edx_237:eax_246 = mulu.dp.d(0x80808081, 
                                zx.d(*(((*(esi + 0xc) & *ebx_44) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))])) * edi)
                            uint32_t eax_249 =
                                ((edx_232 u>> 7) + zx.d(arg5)) u>> *(esi + 0x1d) << *(esi + 0x21)
                                | ((edx_237 u>> 7) + zx.d(arg4)) u>> *(esi + 0x1c) << *(esi + 0x20)
                            int32_t eax_252
                            int32_t edx_245
                            edx_245:eax_252 = mulu.dp.d(0x80808081, 
                                zx.d(*(((*(esi + 0x14) & *ebx_44) u>> *(esi + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1e))])) * edi)
                            ebx_44 += 4
                            *(ebx_44 - 4) = eax_249
                                | ((edx_245 u>> 7) + zx.d(arg6)) u>> *(esi + 0x1e) << *(esi + 0x22)
                                | *(esi + 0x18)
                    case 3
                        goto label_64228b
                
                ebx_44 += (temp0_3 - edx_179) << 2
        else if (arg3 == 2)
            void* eax_126 = *(arg2 + 8)
            arg7.d = *(arg2 + 0xc)
            int32_t temp0_2 = divs.dp.d(sx.q(*(ecx + 0x10)), ebx)
            void* ebx_12 = temp0_2 - eax_126
            void* var_c_10 = ebx_12
            int32_t* edi_4 = *(ecx + 0x14) + ((*(arg2 + 4) * temp0_2 + *arg2) << 2)
            
            while (true)
                int32_t eax_131 = arg7.d
                arg7.d = eax_131 - 1
                
                if (eax_131 == 0)
                    break
                
                int32_t eax_134
                int32_t edx_131
                edx_131:eax_134 = sx.q(eax_126 + 3)
                int32_t var_8_3 = (eax_134 + (edx_131 & 3)) s>> 2
                
                switch (eax_126 & 3)
                    case nullptr
                        goto label_641e1b
                    case 1
                        goto label_641d4f
                    case 2
                        while (true)
                            int32_t eax_170 = *edi_4
                            uint32_t eax_176 = zx.d(*(((*(esi + 0xc) & eax_170) u>> *(esi + 0x20))
                                + (&data_8bac68)[zx.d(*(esi + 0x1c))])) + zx.d(arg4)
                            
                            if (eax_176 u> 0xff)
                                eax_176 = 0xff
                            
                            uint32_t ebx_38 = zx.d(*(((*(esi + 0x10) & eax_170) u>> *(esi + 0x21))
                                + (&data_8bac68)[zx.d(*(esi + 0x1d))])) + zx.d(arg5)
                            
                            if (ebx_38 u> 0xff)
                                ebx_38 = 0xff
                            
                            uint32_t edx_173 = zx.d(*(((*(esi + 0x14) & eax_170) u>> *(esi + 0x22))
                                + (&data_8bac68)[zx.d(*(esi + 0x1e))])) + zx.d(arg6)
                            
                            if (edx_173 u> 0xff)
                                edx_173 = 0xff
                            
                            uint32_t edx_177 = edx_173 u>> *(esi + 0x1e) << *(esi + 0x22)
                                | ebx_38 u>> *(esi + 0x1d) << *(esi + 0x21)
                                | eax_176 u>> *(esi + 0x1c) << *(esi + 0x20)
                            edi_4 = &edi_4[1]
                            edi_4[-1] = edx_177 | *(esi + 0x18)
                        label_641d4f:
                            int32_t eax_139 = *edi_4
                            uint32_t eax_145 = zx.d(*(((*(esi + 0xc) & eax_139) u>> *(esi + 0x20))
                                + (&data_8bac68)[zx.d(*(esi + 0x1c))])) + zx.d(arg4)
                            
                            if (eax_145 u> 0xff)
                                eax_145 = 0xff
                            
                            uint32_t ebx_17 = zx.d(*(((*(esi + 0x10) & eax_139) u>> *(esi + 0x21))
                                + (&data_8bac68)[zx.d(*(esi + 0x1d))])) + zx.d(arg5)
                            
                            if (ebx_17 u> 0xff)
                                ebx_17 = 0xff
                            
                            uint32_t edx_139 = zx.d(*(((*(esi + 0x14) & eax_139) u>> *(esi + 0x22))
                                + (&data_8bac68)[zx.d(*(esi + 0x1e))])) + zx.d(arg6)
                            
                            if (edx_139 u> 0xff)
                                edx_139 = 0xff
                            
                            edi_4 = &edi_4[1]
                            uint32_t edx_143 = edx_139 u>> *(esi + 0x1e) << *(esi + 0x22)
                                | ebx_17 u>> *(esi + 0x1d) << *(esi + 0x21)
                                | eax_145 u>> *(esi + 0x1c) << *(esi + 0x20)
                            int32_t eax_149 = var_8_3 - 1
                            edi_4[-1] = edx_143 | *(esi + 0x18)
                            var_8_3 = eax_149
                            
                            if (eax_149 s<= 0)
                                break
                            
                        label_641e1b:
                            int32_t edx_145 = *edi_4
                            uint32_t edx_149 = zx.d(*(((*(esi + 0xc) & edx_145) u>> *(esi + 0x20))
                                + (&data_8bac68)[zx.d(*(esi + 0x1c))])) + zx.d(arg4)
                            
                            if (edx_149 u> 0xff)
                                edx_149 = 0xff
                            
                            uint32_t ebx_24 = zx.d(*(((*(esi + 0x10) & edx_145) u>> *(esi + 0x21))
                                + (&data_8bac68)[zx.d(*(esi + 0x1d))])) + zx.d(arg5)
                            
                            if (ebx_24 u> 0xff)
                                ebx_24 = 0xff
                            
                            uint32_t eax_158 = zx.d(*(((*(esi + 0x14) & edx_145) u>> *(esi + 0x22))
                                + (&data_8bac68)[zx.d(*(esi + 0x1e))])) + zx.d(arg6)
                            
                            if (eax_158 u> 0xff)
                                eax_158 = 0xff
                            
                            uint32_t edx_153 = edx_149 u>> *(esi + 0x1c) << *(esi + 0x20)
                                | eax_158 u>> *(esi + 0x1e) << *(esi + 0x22)
                                | ebx_24 u>> *(esi + 0x1d) << *(esi + 0x21)
                            edi_4 = &edi_4[1]
                            edi_4[-1] = edx_153 | *(esi + 0x18)
                        label_641edc:
                            int32_t eax_161 = *edi_4
                            uint32_t eax_167 = zx.d(*(((*(esi + 0xc) & eax_161) u>> *(esi + 0x20))
                                + (&data_8bac68)[zx.d(*(esi + 0x1c))])) + zx.d(arg4)
                            
                            if (eax_167 u> 0xff)
                                eax_167 = 0xff
                            
                            uint32_t ebx_31 = zx.d(*(((*(esi + 0x10) & eax_161) u>> *(esi + 0x21))
                                + (&data_8bac68)[zx.d(*(esi + 0x1d))])) + zx.d(arg5)
                            
                            if (ebx_31 u> 0xff)
                                ebx_31 = 0xff
                            
                            uint32_t edx_161 = zx.d(*(((*(esi + 0x14) & eax_161) u>> *(esi + 0x22))
                                + (&data_8bac68)[zx.d(*(esi + 0x1e))])) + zx.d(arg6)
                            
                            if (edx_161 u> 0xff)
                                edx_161 = 0xff
                            
                            uint32_t edx_165 = edx_161 u>> *(esi + 0x1e) << *(esi + 0x22)
                                | ebx_31 u>> *(esi + 0x1d) << *(esi + 0x21)
                                | eax_167 u>> *(esi + 0x1c) << *(esi + 0x20)
                            edi_4 = &edi_4[1]
                            edi_4[-1] = edx_165 | *(esi + 0x18)
                        
                        ebx_12 = var_c_10
                    case 3
                        goto label_641edc
                
                edi_4 = &edi_4[ebx_12]
        else
            void* edx = *(arg2 + 8)
            arg7.d = *(arg2 + 0xc)
            int32_t eax_9
            int32_t edx_1
            edx_1:eax_9 = sx.q(*(ecx + 0x10))
            
            if (arg3 == 4)
                int32_t temp0_1 = divs.dp.d(edx_1:eax_9, ebx)
                void* ebx_2 = temp0_1 - edx
                void* var_10_1 = ebx_2
                int32_t* edi_3 = *(ecx + 0x14) + ((*(arg2 + 4) * temp0_1 + *arg2) << 2)
                
                while (true)
                    int32_t eax_48 = arg7.d
                    arg7.d = eax_48 - 1
                    
                    if (eax_48 == 0)
                        break
                    
                    int32_t eax_51
                    int32_t edx_36
                    edx_36:eax_51 = sx.q(edx + 3)
                    int32_t var_8_2 = (eax_51 + (edx_36 & 3)) s>> 2
                    
                    switch (edx & 3)
                        case nullptr
                            goto label_641a99
                        case 1
                            goto label_6419c8
                        case 2
                            while (true)
                                int32_t ebx_9 = *edi_3
                                int32_t eax_111
                                int32_t edx_108
                                edx_108:eax_111 = mulu.dp.d(0x80808081, 
                                    zx.d(*(((*(esi + 0xc) & ebx_9) u>> *(esi + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))])) * zx.d(arg4))
                                int32_t eax_117
                                int32_t edx_114
                                edx_114:eax_117 = mulu.dp.d(0x80808081, 
                                    zx.d(*(((*(esi + 0x14) & ebx_9) u>> *(esi + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1e))])) * zx.d(arg6))
                                char ebx_10 = *(esi + 0x21)
                                int32_t eax_122
                                int32_t edx_122
                                edx_122:eax_122 = mulu.dp.d(0x80808081, 
                                    zx.d(*(((*(esi + 0x10) & ebx_9) u>> ebx_10)
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))])) * zx.d(arg5))
                                uint32_t eax_124 = edx_108 u>> 7 u>> *(esi + 0x1c) << *(esi + 0x20)
                                    | edx_114 u>> 7 u>> *(esi + 0x1e) << *(esi + 0x22)
                                    | edx_122 u>> 7 u>> *(esi + 0x1d) << ebx_10
                                edi_3 = &edi_3[1]
                                edi_3[-1] = eax_124 | *(esi + 0x18)
                            label_6419c8:
                                int32_t ebx_3 = *edi_3
                                edi_3 = &edi_3[1]
                                int32_t eax_58
                                int32_t edx_42
                                edx_42:eax_58 = mulu.dp.d(0x80808081, 
                                    zx.d(*(((*(esi + 0xc) & ebx_3) u>> *(esi + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))])) * zx.d(arg4))
                                int32_t eax_64
                                int32_t edx_48
                                edx_48:eax_64 = mulu.dp.d(0x80808081, 
                                    zx.d(*(((*(esi + 0x14) & ebx_3) u>> *(esi + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1e))])) * zx.d(arg6))
                                char ebx_4 = *(esi + 0x21)
                                int32_t eax_69
                                int32_t edx_56
                                edx_56:eax_69 = mulu.dp.d(0x80808081, 
                                    zx.d(*(((*(esi + 0x10) & ebx_3) u>> ebx_4)
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))])) * zx.d(arg5))
                                uint32_t eax_71 = edx_42 u>> 7 u>> *(esi + 0x1c) << *(esi + 0x20)
                                    | edx_48 u>> 7 u>> *(esi + 0x1e) << *(esi + 0x22)
                                    | edx_56 u>> 7 u>> *(esi + 0x1d) << ebx_4
                                edi_3[-1] = eax_71 | *(esi + 0x18)
                                int32_t eax_74 = var_8_2 - 1
                                var_8_2 = eax_74
                                
                                if (eax_74 s<= 0)
                                    break
                                
                            label_641a99:
                                int32_t ebx_5 = *edi_3
                                int32_t eax_77
                                int32_t edx_64
                                edx_64:eax_77 = mulu.dp.d(0x80808081, 
                                    zx.d(*(((*(esi + 0x14) & ebx_5) u>> *(esi + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1e))])) * zx.d(arg6))
                                int32_t eax_83
                                int32_t edx_70
                                edx_70:eax_83 = mulu.dp.d(0x80808081, 
                                    zx.d(*(((*(esi + 0x10) & ebx_5) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))])) * zx.d(arg5))
                                char ebx_6 = *(esi + 0x20)
                                int32_t eax_88
                                int32_t edx_78
                                edx_78:eax_88 = mulu.dp.d(0x80808081, 
                                    zx.d(*(((*(esi + 0xc) & ebx_5) u>> ebx_6)
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))])) * zx.d(arg4))
                                uint32_t eax_90 = edx_64 u>> 7 u>> *(esi + 0x1e) << *(esi + 0x22)
                                    | edx_70 u>> 7 u>> *(esi + 0x1d) << *(esi + 0x21)
                                    | edx_78 u>> 7 u>> *(esi + 0x1c) << ebx_6
                                edi_3 = &edi_3[1]
                                edi_3[-1] = eax_90 | *(esi + 0x18)
                            label_641b5b:
                                int32_t ebx_7 = *edi_3
                                int32_t eax_94
                                int32_t edx_86
                                edx_86:eax_94 = mulu.dp.d(0x80808081, 
                                    zx.d(*(((*(esi + 0x14) & ebx_7) u>> *(esi + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1e))])) * zx.d(arg6))
                                int32_t eax_100
                                int32_t edx_92
                                edx_92:eax_100 = mulu.dp.d(0x80808081, 
                                    zx.d(*(((*(esi + 0x10) & ebx_7) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))])) * zx.d(arg5))
                                char ebx_8 = *(esi + 0x20)
                                int32_t eax_105
                                int32_t edx_100
                                edx_100:eax_105 = mulu.dp.d(0x80808081, 
                                    zx.d(*(((*(esi + 0xc) & ebx_7) u>> ebx_8)
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))])) * zx.d(arg4))
                                uint32_t eax_107 = edx_86 u>> 7 u>> *(esi + 0x1e) << *(esi + 0x22)
                                    | edx_92 u>> 7 u>> *(esi + 0x1d) << *(esi + 0x21)
                                    | edx_100 u>> 7 u>> *(esi + 0x1c) << ebx_8
                                edi_3 = &edi_3[1]
                                edi_3[-1] = eax_107 | *(esi + 0x18)
                            
                            ebx_2 = var_10_1
                        case 3
                            goto label_641b5b
                    
                    edi_3 = &edi_3[ebx_2]
            else
                int32_t temp0 = divs.dp.d(edx_1:eax_9, ebx)
                ebx.b = arg6
                void* edi_2 = *(ecx + 0x14) + ((*(arg2 + 4) * temp0 + *arg2) << 2)
                
                while (true)
                    int32_t eax_12 = arg7.d
                    arg7.d = eax_12 - 1
                    
                    if (eax_12 == 0)
                        break
                    
                    int32_t eax_15
                    int32_t edx_7
                    edx_7:eax_15 = sx.q(edx + 3)
                    int32_t var_8_1 = (eax_15 + (edx_7 & 3)) s>> 2
                    
                    switch (edx & 3)
                        case nullptr
                            goto label_6418e4
                        case 1
                            goto label_641899
                        case 2
                            while (true)
                                uint32_t edx_31 = zx.d(arg4) u>> *(esi + 0x1c) << *(esi + 0x20)
                                    | zx.d(arg5) u>> *(esi + 0x1d) << *(esi + 0x21)
                                    | zx.d(ebx.b) u>> *(esi + 0x1e) << *(esi + 0x22)
                                edi_2 += 4
                                *(edi_2 - 4) = edx_31 | *(esi + 0x18)
                            label_641899:
                                edi_2 += 4
                                uint32_t edx_13 = zx.d(arg4) u>> *(esi + 0x1c) << *(esi + 0x20)
                                    | zx.d(arg5) u>> *(esi + 0x1d) << *(esi + 0x21)
                                    | zx.d(ebx.b) u>> *(esi + 0x1e) << *(esi + 0x22)
                                int32_t eax_27 = var_8_1 - 1
                                *(edi_2 - 4) = edx_13 | *(esi + 0x18)
                                var_8_1 = eax_27
                                
                                if (eax_27 s<= 0)
                                    break
                                
                            label_6418e4:
                                uint32_t edx_19 = zx.d(arg4) u>> *(esi + 0x1c) << *(esi + 0x20)
                                    | zx.d(arg5) u>> *(esi + 0x1d) << *(esi + 0x21)
                                    | zx.d(ebx.b) u>> *(esi + 0x1e) << *(esi + 0x22)
                                edi_2 += 4
                                *(edi_2 - 4) = edx_19 | *(esi + 0x18)
                            label_641920:
                                uint32_t edx_25 = zx.d(arg4) u>> *(esi + 0x1c) << *(esi + 0x20)
                                    | zx.d(arg5) u>> *(esi + 0x1d) << *(esi + 0x21)
                                    | zx.d(ebx.b) u>> *(esi + 0x1e) << *(esi + 0x22)
                                edi_2 += 4
                                *(edi_2 - 4) = edx_25 | *(esi + 0x18)
                        case 3
                            goto label_641920
                    
                    edi_2 += (temp0 - edx) << 2
    
    return 0
}
